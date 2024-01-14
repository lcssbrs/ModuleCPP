/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:14:42 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/12 17:10:34 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include<vector>
#include <exception>
#include <list>


class NotFindException : public std::exception
{
	public:
		const char *what() const throw();
};

const char * NotFindException::what() const throw()
{
	return "NO";
}

template <typename T>
int easyfind(T contain, int second)
{
	typename T::iterator it = std::find(contain.begin(), contain.end(), second);
	if (it != contain.end())
		return (*it);
	throw (NotFindException());
}

#endif
