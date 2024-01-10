/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:05:12 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/10 16:18:44 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"

Base::~Base()
{

}

Base *Base::generate(void)
{
	srand(time(NULL));
	int random = rand()%100;
	if (random % 3 == 0)
	{
		Base *baseA = new BaseA();
		return baseA;
	}
	else if (random % 2 == 0)
	{
		Base *baseB = new BaseB();
		return baseB;
	}
	Base *baseC = new BaseC();
	return baseC;
}

void Base::identify(Base* p)
{
	if (dynamic_cast<BaseA*>(p))
	{
		std::cout << "This is a A\n";
		return ;
	}
	if (dynamic_cast<BaseB*>(p))
	{
		std::cout << "This is a B\n";
		return ;
	}
	if (dynamic_cast<BaseC*>(p))
	{
		std::cout << "This is a C\n";
		return ;
	}
	std::cout << "Not a base class\n";
}
