/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:01:53 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/16 10:00:10 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

const char *WrongArgsException::what() const throw()
{
	return "Please, put one and only one file and it has to be a .csv\n";
}

void	check_args(int ac, char **ag)
{
	if (ac != 2)
		throw (WrongArgsException());
	std::string newag;

	newag = ag[1];
	if (newag.find(".txt", newag.size() - 4) == std::string::npos)
		throw (WrongArgsException());
	std::ifstream file(newag);
	if (!file.is_open())
		throw (WrongArgsException());
}
