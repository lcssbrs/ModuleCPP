/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 09:41:00 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/18 09:41:01 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <stack>


class RPN {
	private :
		std::stack<int> numbers;
		std::string argument;
		int result;

	public :
		RPN();
		RPN(std::string arguments);

		RPN(const RPN& other);

		RPN& operator=(const RPN& other);


		// Utils.
		bool isOperator(char op) const;

		int calculate(int number1, int number2, char op) const;

		//
		int evaluate ();

        // Geter
        int getResult() const;

		~RPN();
};
