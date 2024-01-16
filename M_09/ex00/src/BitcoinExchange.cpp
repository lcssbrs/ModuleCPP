/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:01:53 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/16 18:17:07 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

const char *WrongArgsException::what() const throw()
{
	return "Please, put one and only one existant file and it has to be a .csv\n";
}

void	check_args(int ac, char **ag)
{
	if (ac != 2)
		throw (WrongArgsException());
	std::string newag;

	newag = ag[1];
	if (newag.find(".txt", newag.size() - 4) == std::string::npos)
		throw (WrongArgsException());
	std::ifstream file(newag);
	if (!file.is_open())
		throw (WrongArgsException());
}

const char *NotReadableDataException::what() const throw()
{
	return "Data file not readble\n";
}

bool	check_int_array(int size, int nb, int *array)
{
	int i = 0;
	while (i < size)
	{
		if (nb == array[i])
			return true;
		i++;
	}
	return false;
}

int check_days_month(int days, int month)
{
	int shorterMonth[] = {4, 6, 9, 11};
	if (check_int_array(4, days, shorterMonth) == true)
	{
		if (days > 30)
			return -1;
	}
	else if (month == 2)
	{
		if (days > 29)
			return -1;
	}
	return 0;
}

int check_date(std::string date)
{
	std::string tmp = date;
	int year = stoi(tmp.erase(date.find('-')));
	if (year < 1000)
		return -1;
	tmp = date;
	tmp.erase(0, date.find('-') + 1);
	int month = stoi(tmp.erase(date.find('-')));
	if (month < 0 || month > 12)
		return -1;
	tmp = date;
	tmp.erase(0, date.find_last_of('-') + 1);
	int days = stoi(tmp);
	if (days < 0 || days > 31)
		return -1;
	if (check_days_month(days, month) == -1)
		return -1;
	return 0;
}

bool is_digits(std::string str)
{
	std::string::iterator it=str.begin();
	while (it != str.end())
	{
		if (std::isdigit(*it) == 0)
			return false;
		it++;
	}
	return true;
}

bool is_digits_float(std::string str)
{
	std::string::iterator it=str.begin();
	while (it != str.end())
	{
		if (std::isdigit(*it) == 0 && (*it) != '.')
			return false;
		it++;
	}
	return true;
}

int	check_value_is_digit(std::string value)
{
	std::string tmp = value;
	if (value.compare("0") == 0)
		return 0;
	else if (tmp.find(".") != std::string::npos)
	{
		if (is_digits_float(tmp) == false)
			return -1;
	}
	else if (is_digits(value) == false)
		return -1;
	return 0;
}

map	add_data_to_map(map map_data, std::string line)
{
	std::string date;
	std::string tmp;
	std::string value;
	tmp = line;
	date = tmp.erase(line.find(','));
	value = line.erase(0, line.find(',') + 1);
	if (check_date(date) == -1)
		map_data.insert(make_pair(date, "date error"));
	else if (check_value_is_digit(value) == -1)
		map_data.insert(make_pair(date, "error nb"));
	else
		map_data.insert(make_pair(date, value));
	return map_data;
}

const char *ErrorLineException::what() const throw()
{
	return "Error line can't be read\n";
}

map open_data(std::string data)
{
	std::string line;
	std::string input;
	map map_data;
	std::ifstream file(data);

	if (!file.is_open())
		throw (NotReadableDataException());
	getline(file, line);
	while (getline(file, line))
	{
		if (line.find(',') != std::string::npos)
			map_data = add_data_to_map(map_data, line);
	}
	file.close();
	return map_data;
}

