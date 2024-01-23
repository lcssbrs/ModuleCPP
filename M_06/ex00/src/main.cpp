/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:52:00 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/22 15:42:28 by lseiberr         ###   ########.fr       */
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
	ScalarConverter::convert(ag[1]);
}
