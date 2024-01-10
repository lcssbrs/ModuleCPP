/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:52:00 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/10 20:12:55 by lseiberr         ###   ########.fr       */
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
	//remove if instantiabl class
	if (ac == 2)
		std::cout << "not instanciable class yet\n";
	/*ScalarConverter scal;

	scal.convert();*/
}
