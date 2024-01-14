/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 13:22:54 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/13 17:31:35 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
  Span sp = Span(5);
  unsigned int i = 0;
  while (i < sp.getSize())
  {
	try
	{
		sp.addNumber(i * 10 + 3);
	}
	catch(Span::SizeFullException & e)
	{
		std::cerr << e.what() << '\n';
	}
	i++;
  }
  try
  {
	sp.addNumber(666);
  }
  catch (Span::SizeFullException & e)
  {
	std::cerr << e.what();
  }
  try
  {
	sp.addNumber(6);
  }
  catch (Span::SizeFullException & e)
  {
	std::cerr << e.what();
  }
  try
  {
	sp.addNumber(16);
  }
  catch (Span::SizeFullException & e)
  {
	std::cerr << e.what();
  }
  try
  {
	sp.addNumber(5);
  }
  catch (Span::SizeFullException & e)
  {
	std::cerr << e.what();
  }
  try
  {
	sp.addNumber(98767);
  }
  catch (Span::SizeFullException & e)
  {
	std::cerr << e.what();
  }
  try
  {
	sp.addNumber(5);
  }
  catch (Span::SizeFullException & e)
  {
	std::cerr << e.what();
  }
  try
  {
	sp.addNumber(96);
  }
  catch (Span::SizeFullException & e)
  {
	std::cerr << e.what();
  }
  try
  {
	std::cout << sp.longestSpan() << std::endl;
  }
  catch (Span::NotEnoughValueException & e)
  {
	std::cerr << e.what();
  }
  try
  {
	std::cout << sp.shortestSpan() << std::endl;
  }
  catch (Span::NotEnoughValueException & e)
  {
	std::cerr << e.what();
  }
	return 0;
}
