/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:41:17 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/10 15:18:06 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{

}

ScalarConverter::ScalarConverter(const ScalarConverter &cpy)
{
	*this = cpy;
}

ScalarConverter & ScalarConverter::operator=(const ScalarConverter &ope)
{
	(void)ope;
	return *this;
}

ScalarConverter::~ScalarConverter()
{

}

int	str_isalpha(const char *str)
{
	int i = 0;
	while (str[i])
	{
		if (isalpha(str[i]) == 0)
			return -1;
		i++;
	}
	return (0);
}

void	ScalarConverter::convert_char(const char *str)
{
	if (strlen(str) == 1 && isalpha(*str))
	{
		std::cout << str << std::endl;
		return ;
	}
	else if (strlen(str) == 1 && !isprint(*str))
		throw (ScalarConverter::CharNotPrintableException());
	if (str_isalpha(str) == 0)
		throw (ScalarConverter::ImpossibleException());
	int newstr = atoi(str);
	if (!newstr)
		throw (ScalarConverter::ImpossibleException());
	if (newstr < 32 || newstr > 126)
		throw (ScalarConverter::CharNotPrintableException());
	std::cout << static_cast<char>(newstr) <<std::endl;
}

void ScalarConverter::print_char(const char *str)
{
	std::cout << "char: ";
	try
	{
		convert_char(str);
	}
	catch(const ScalarConverter::CharNotPrintableException& e)
	{
		std::cerr << e.what() << '\n';
	}
	catch (const ScalarConverter::ImpossibleException& ee)
	{
		std::cerr << ee.what() << '\n';
	}
}

void ScalarConverter::convert(const char *str)
{
	print_char(str);
	print_int(str);
	print_double(str);
	print_float(str);
}

const char * ScalarConverter::CharNotPrintableException::what() const throw()
{
	return "Char is not printable";
}

const char * ScalarConverter::ImpossibleException::what() const throw()
{
	return "Impossible";
}


void	ScalarConverter::convert_int(const char *str)
{
	if (!atoi(str))
		throw(ScalarConverter::ImpossibleException());
	std::cout << atoi(str) << std::endl;
}

void ScalarConverter::print_int(const char *str)
{
	std::cout << "int: ";
	try
	{
		convert_int(str);
	}
	catch(const ScalarConverter::ImpossibleException& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	ScalarConverter::convert_double(const char *str)
{
	if (!atof(str))
		throw (ScalarConverter::ImpossibleException());
	std::cout << std::setprecision(4) << atof(str);
	if (atof(str) == atoi(str))
		std::cout << ".0";
	std::cout << "\n";
}

void	ScalarConverter::print_double(const char *str)
{
	std::cout << "double: ";
	try
	{
		convert_double(str);
	}
	catch (const ScalarConverter::ImpossibleException& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void	ScalarConverter::convert_float(const char *str)
{
	if (!atof(str))
		throw (ScalarConverter::ImpossibleException());
	std::cout << std::setprecision(4) << atof(str);
	if (atof(str) == atoi(str))
		std::cout << ".0";
	std::cout << "f\n";
}

void	ScalarConverter::print_float(const char *str)
{
	std::cout << "float: ";
	try
	{
		convert_float(str);
	}
	catch (const ScalarConverter::ImpossibleException& e)
	{
		std::cerr << e.what() << '\n';
	}
}
