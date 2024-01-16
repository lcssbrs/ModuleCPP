/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 09:07:00 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/16 18:54:25 by lseiberr         ###   ########.fr       */
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
	while (itr_txt != map_txt.end())
	{
		itr_data = map_data.begin();
		while (itr_data != map_data.end())
		{
			if (itr_txt->first.compare(itr_data->first) == 0)
			{
				std::cout << stof(itr_txt->second) * stof(itr_data->second) << std::endl;
			}
			itr_data++;
		}
		itr_txt++;
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

