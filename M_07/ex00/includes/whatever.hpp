/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 09:57:02 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/11 16:16:47 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
void swap(T a, T b)
{
	std::swap(a, b);
}

template <typename T>

T max(T a, T b)
{
	return (std::max(a, b));
}

template <typename T>
T min(T a, T b)
{
	return (std::min(a, b));
}

#endif
