/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:52:00 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/10 13:33:43 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

int main (int ac, char **ag)
{
	(void)ag;
	if (ac != 2)
	{
		std::cout << "Put an argument\n";
		return 0;
	}
	if (ac == 2)
		std::cout << "not instanciable class yet\n";
	/*ScalarConverter scal;

	scal.convert();*/
}
