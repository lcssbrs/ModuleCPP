/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:34:15 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/10 15:16:16 by lseiberr         ###   ########.fr       */
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
