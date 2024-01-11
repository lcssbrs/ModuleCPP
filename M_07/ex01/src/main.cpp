/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:27:24 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/11 16:57:55 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"

int main(int ac, char **ag)
{
	if (ac != 2)
	{
		std::cout << "Put an argument\n";
		return -1;
	}
	iter(ag[1], strlen(ag[1]), funct);
	std::cout << std::endl;
	int test[] = {4, 3, 2, 1};
	iter(test, 4, funct);
	std::cout << std::endl;
	return 0;
}
