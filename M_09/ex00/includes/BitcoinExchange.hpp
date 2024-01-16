/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 09:07:42 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/16 11:05:31 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <exception>
#include <fstream>
#include <string>
#include <map>

class WrongArgsException : public std::exception
{
	public:
		const char *what() const throw();
};
void		check_args(int ac, char **ag);

class NotReadableDataException : public std::exception
{
	public:
		const char *what() const throw();
};

typedef std::map<std::string, std::string> map;
map	open_data(void);

#endif
