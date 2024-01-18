/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:39:43 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/18 09:39:44 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <map>
#include <ctime>
#include <cstring>
#include <algorithm>
#include <cctype>
#include <iomanip>

std::string trim(const std::string& str);

struct BitcoinExchange {
	private:
		std::map<std::string, double> dataBase;
		bool _data;
		int firstDate[3];

	public:
		BitcoinExchange();

		BitcoinExchange(const BitcoinExchange& other);

		BitcoinExchange& operator= (const BitcoinExchange& other);


		void BaseFilling();

		void ReadInput(const std::string& inputFile);

		bool validateDate(const std::string& date);

		std::map<std::string, double>::iterator findDate(std::string date);

		std::string decreaseDate(std::string date);

		void fillFirstDate(std::string date);

		void error(std::string type);

		~BitcoinExchange ();
};
