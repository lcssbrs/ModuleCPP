/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 16:37:09 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/06 16:37:09 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int main (void)
{
	Bureaucrat boss("boss", 150);
	std::cout << boss;
	try
	{
		boss.decrementGrade();
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "c'est pas bien\n";
	}
	Bureaucrat boss2("boss2", 1);
	std::cout << boss2;
	try
	{
		boss2.incrementGrade();
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "toujours pas bien\n";
	}
	std::cout << boss2;
}
