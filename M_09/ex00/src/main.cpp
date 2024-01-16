/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 09:07:00 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/16 20:03:06 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

int	main(int ac, char **ag)
{
	map map_data;
	map map_txt;
	try
	{
		check_args(ac, ag);
	}
	catch(WrongArgsException& e)
	{
		std::cerr << e.what();
	}
	map_data = open_data("data.csv");
	map_txt = open_data((std::string)ag[1]);
	map::iterator itr_txt = map_txt.begin();
	map::iterator itr_data = map_data.begin();
	while (itr_data != map_data.end())
	{
		itr_txt = map_txt.begin();
		while (itr_txt != map_txt.end())
		{
			if (itr_data->first.compare(itr_txt->first) == 0)
			{
				if (itr_data->second.find((std::string)"error") != std::string::npos || itr_txt->second.find((std::string)"error") != std::string::npos)
					std::cout << "Error\n";
				else
					std::cout << stof(itr_txt->second) * stof(itr_data->second) << std::endl;
			}
			itr_txt++;
		}
		itr_data++;
	}
/*
	map::iterator itr = map_txt.begin();
	while(itr!=map_txt.end())
	{
        std::cout<<itr->first<<" "<<itr->second<<std::endl;
		itr++;
	}
*/
}

