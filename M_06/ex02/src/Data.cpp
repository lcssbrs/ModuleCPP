/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:19:46 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/10 15:30:03 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Data.hpp"

Data::Data()
{

}

Data::Data(const Data & cpy)
{
	*this = cpy;
}

Data & Data:: operator=(const Data & ope)
{
	(void)ope;
	return *this;
}

Data::~Data()
{

}

int Data::getTest(void)const
{
	return this->test;
}
