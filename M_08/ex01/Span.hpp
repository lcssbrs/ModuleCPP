/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 13:23:06 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/13 17:28:18 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <exception>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

class Span
{
	public:
		Span(unsigned int newSize);
		Span(const Span & cpy);
		Span & operator=(const Span & ope);
		~Span();

		unsigned int	getSize(void)const;
		void			addNumber(int add);
		unsigned int	longestSpan(void);
		unsigned int	shortestSpan(void);

		class SizeFullException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		class NotEnoughValueException : public std::exception
		{
			public:
				const char *what() const throw();
		};

	private:
		unsigned int size;
		std::vector<int> keeper;

	protected:
};

#endif
