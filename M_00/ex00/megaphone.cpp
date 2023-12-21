/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:50:44 by lseiberr          #+#    #+#             */
/*   Updated: 2023/12/19 14:00:53 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <cctype>
#include <iostream>

int	main(int ac, char **ag)
{
	int	i;
	int	j;

	i = 0;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (ag[++i])
		{
			j = -1;
			if (i != 1)
					std::cout << " ";
			while (ag[i][++j])
				std::cout << (char)toupper(ag[i][j]);
		}
	}
	std::cout << "\n";
	return (0);
}
