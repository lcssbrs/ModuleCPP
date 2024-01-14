/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 13:24:55 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/14 15:12:04 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int newSize)
{
	this->size = newSize;
}

Span::Span(const Span & cpy)
{
	*this = cpy;
}

Span & Span::operator=(const Span & ope)
{
	this->size = ope.getSize();
	return *this;
}

Span::~Span()
{

}

unsigned int Span::getSize(void)const
{
	return this->size;
}

const char *Span::SizeFullException::what() const throw()
{
	return "Size full\n";
}

const char *Span::NotEnoughValueException::what() const throw()
{
	return "Not enough member in vector\n";
}

void Span::addNumber(int add)
{
	if (this->keeper.size() >= this->size)
	{
		throw(Span::SizeFullException());
		return ;
	}
	keeper.push_back(add);
}

unsigned int	Span::longestSpan(void)
{
	if (this->size <= 1)
		throw(Span::NotEnoughValueException());
	sort(this->keeper.begin(), this->keeper.end());
	int itmin = this->keeper.front();
	int itmax = this->keeper.back();
	//std::cout << itmin << std::endl;
	//std::cout << itmax << std::endl;
	return itmax - itmin;
}

unsigned int	Span::shortestSpan(void)
{
	if (this->size <= 1)
		throw(Span::NotEnoughValueException());
	sort(this->keeper.begin(), this->keeper.end());
	unsigned int i = 1;
	int mini = abs(this->keeper[i] - this->keeper[i - 1]);
	while (i < this->keeper.size())
	{
		if (mini > abs(this->keeper[i] - this->keeper[i - 1]))
			mini = abs(this->keeper[i] - this->keeper[i - 1]);
		i++;
	}
	return	mini;
}
