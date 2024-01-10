/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:54:53 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/10 16:17:54 by lseiberr         ###   ########.fr       */
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
		Base * generate(void);
		void identify(Base* p);
		//void identify(Base& p);

	private:

	protected:

};

class BaseA : public Base
{
	public:
		~BaseA();
};

class BaseB : public Base
{
	public:
		~BaseB();
};

class BaseC : public Base
{
	public:
		~BaseC();
};

#endif
