/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:01:53 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/16 11:21:09 by lseiberr         ###   ########.fr       */
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

map	add_data_to_map(map map_data, std::string line)
{
	std::string date;
	std::string tmp;
	std::string value;
	tmp = line;
	date = tmp.erase(line.find(','));
	value = line.erase(0, line.find(',') + 1);
	map_data.insert(make_pair(date, value));
	return map_data;
}

map open_data(void)
{
	std::string line;
	std::string input;
	map map_data;
	std::ifstream file("data.csv");

	if (!file.is_open())
		throw (NotReadableDataException());
	getline(file, line);
	while (getline(file, line))
	{
		if (line.find(',') != std::string::npos)
		{
			map_data = add_data_to_map(map_data, line);
		}
	}
	file.close();
	map::iterator itr;
    for(itr=map_data.begin();itr!=map_data.end();itr++)
    {
        std::cout<<itr->first<<" "<<itr->second<<std::endl;
    }
	return map_data;
}
