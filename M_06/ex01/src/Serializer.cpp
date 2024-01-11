/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:06:05 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/11 09:26:33 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

Serializer::Serializer()
{

}

Serializer::Serializer(const Serializer & cpy)
{
	*this = cpy;
}

Serializer & Serializer::operator=(const Serializer & ope)
{
	(void)ope;
	return *this;
}

Serializer::~Serializer()
{

}

uintptr_t Serializer::serialize(Data* ptr)
{
	uintptr_t value = reinterpret_cast<uintptr_t>(ptr);
	return value;
}

Data* Serializer::deserialize(uintptr_t raw)
{
	Data *newData = new Data();
	newData =  reinterpret_cast<Data *>(raw);
	return newData;
}
