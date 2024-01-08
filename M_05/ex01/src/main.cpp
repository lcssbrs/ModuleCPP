/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 16:37:09 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/08 10:03:54 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

int main (void)
{
	Bureaucrat boss("boss", 150);
	Form form;
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
}
