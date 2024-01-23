/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:32:21 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/22 15:41:03 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <exception>
#include <string.h>
#include <stdlib.h>
#include <iomanip>

class ScalarConverter
{
	public:
	//coplien


	//exception
	class CharNotPrintableException : public std::exception
	{
		public:
			const char *what() const throw();
	};

	class ImpossibleException: public std::exception
	{
		public:
			const char *what() const throw();
	};
	//convert function
		static void convert(const char *str);
		static void print_char(const char *str);
		static void print_int(const char *str);
		static void convert_char(const char *str);
		static void convert_int(const char *str);
		static void	print_double(const char *str);
		static void convert_double(const char *str);
		static void convert_float(const char *str);
		static void	print_float(const char *str);

	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &cpy);
		ScalarConverter & operator=(const ScalarConverter & ope);
		virtual ~ScalarConverter();

	protected:
};

#endif
