/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:27:14 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/11 16:57:36 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <cstring>

template <typename T>
void funct(T element)
{
	std::cout << element;
}

template <typename T>
void iter(T *array, int len, void (*func)(T))
{
	while (len > 0)
	{
		(*func)(*array);
		array += 1;
		len--;
	}
}

#endif
