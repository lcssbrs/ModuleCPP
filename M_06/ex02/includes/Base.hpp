/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:54:53 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/10 20:10:19 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

class Base
{
	public:
		virtual ~Base();

	private:

	protected:

};

class BaseA : public Base
{

};

class BaseB : public Base
{

};

class BaseC : public Base
{

};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif
