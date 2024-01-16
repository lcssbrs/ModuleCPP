/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 09:07:00 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/16 16:25:30 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

int	main(int ac, char **ag)
{
	try
	{
		check_args(ac, ag);
		open_data();
	}
	catch(WrongArgsException& e)
	{
		std::cerr << e.what();
	}
	catch (NotReadableDataException & ex)
	{
		std::cerr << ex.what();
	}
	catch (ErrorLineException & exc)
	{
		std::cerr << exc.what();
	}
	(void)ag;
}

