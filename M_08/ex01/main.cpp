/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 13:22:54 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/14 15:12:42 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
  Span sp = Span(5);
  try
  {
	  sp.addNumber(666);
  	sp.addNumber(6);
    sp.addNumber(16);
    sp.addNumber(5);
    sp.addNumber(98767);
  }
  catch (Span::SizeFullException & e)
  {
	  std::cerr << e.what();
  }
  try
  {
    std::cout << sp.shortestSpan() << std::endl;
	  std::cout << sp.longestSpan() << std::endl;
  }
  catch (Span::NotEnoughValueException & e)
  {
	  std::cerr << e.what();
  }
	return 0;
}
