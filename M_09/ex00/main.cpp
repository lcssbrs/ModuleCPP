/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:39:52 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/18 09:39:58 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "BitcoinExchange.hpp"

int main (int argc, char **argv) {
    if (argc > 2 || argc < 2)
        return (std::cerr << "Error: Input count is wrong" << std::endl, 0);
    BitcoinExchange k;

    k.BaseFilling();
    k.ReadInput(argv[1]);
}
