/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:34:15 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/11 09:34:40 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <stdint.h>
#include <iostream>
#include <exception>
#include <string.h>
#include <stdlib.h>
#include <iomanip>
#include <cassert>

#include "Data.hpp"

class Data;
class Serializer
{
	public:
		Serializer();
		Serializer(const Serializer & cpy);
		Serializer & operator=(const Serializer & ope);
		virtual ~Serializer();
		uintptr_t serialize(Data* ptr);
		Data* deserialize(uintptr_t raw);
	private:


	protected:

};

#endif
