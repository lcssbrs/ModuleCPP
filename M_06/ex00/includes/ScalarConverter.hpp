/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 11:32:21 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/09 12:26:29 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ScalarConverter
{
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &cpy);
		ScalarConverter & operator=(const ScalarConverter & ope);
		~ScalarConverter();

		static auto convert(auto str);
	private:

	protected:
};
