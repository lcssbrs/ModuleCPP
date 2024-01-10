/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:05:12 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/10 20:11:25 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"

Base::~Base()
{

}

Base *generate(void)
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

void identify(Base* p)
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

void    identify( Base& p )
{
	try {
		BaseA& a = dynamic_cast< BaseA& >( p );
		std::cout << "This is an A" << std::endl;
		(void)a;
	}
	catch(const std::exception& e)
	{

	}
	try
	{
		BaseB& b = dynamic_cast< BaseB& >( p );
		std::cout << "This is an B" << std::endl;
		(void)b;
	} catch( const std::exception& e )
	{

	}
	try
	{
		BaseC& c = dynamic_cast< BaseC& >( p );
		std::cout << "This is an C" << std::endl;
		(void)c;
	}
	catch( const std::exception& e )
	{

	}
}
