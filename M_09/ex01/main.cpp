/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:40:41 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/18 09:57:01 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char* argv[]) {
    if (argc < 2 || argc > 2) {
        std::cerr << "Error: Wrong Input Count" << std::endl;
        return 1;
    }

	try {
		std::string expression(argv[1]);
		RPN rpn(expression);

		int r = rpn.getResult();
		std::cout << r << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

    return 0;
}
