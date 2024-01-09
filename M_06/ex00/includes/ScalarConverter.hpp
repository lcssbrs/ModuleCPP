/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:32:21 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/09 17:58:48 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>

class ScalarConverter
{
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &cpy);
		ScalarConverter & operator=(const ScalarConverter & ope);
		virtual ~ScalarConverter();
	class CharNotPrintableException : public std::exception
	{
		public:
			const char *what() const throw();
	};

		static void convert(const char *str);
	private:

	protected:
};
