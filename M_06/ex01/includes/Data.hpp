/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:00:30 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/10 15:31:31 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <stdint.h>
#include <iostream>
#include <exception>
#include <string.h>
#include <stdlib.h>
#include <iomanip>
#include <cassert>

#include "Serializer.hpp"

class Serializer;

class Data
{
	public:
		Data();
		Data(const Data & cpy);
		Data & operator=(const Data & ope);
		virtual ~Data();
		int getTest(void)const;

	private:
		const static int test = 74;
	protected:

};

#endif
