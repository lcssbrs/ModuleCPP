/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 09:07:00 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/16 09:44:30 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

int	main(int ac, char **ag)
{
	try
	{
		check_args(ac, ag);
	}
	catch(WrongArgsException& e)
	{
		std::cerr << e.what();
	}
	(void)ag;
}
