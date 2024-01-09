/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 17:41:17 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/09 18:01:01 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "Constructor called\n";
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
	std::cout << "Destructor called\n";
}

void ScalarConverter::convert(const char *str)
{
	convert_char(str);
	convert_int(str);
	convert_double(str);
	convert_float(str);
}

const char * ScalarConverter::CharNotPrintableException::what() const throw()
{
	return "Char is not printable\n";
}
