/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 16:37:09 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/08 15:28:31 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"


int main (void)
{
	Bureaucrat boss("boss", 150);
	RobotomyRequestForm Robot("default");
	PresidentialPardonForm pres("pres");
	ShrubberyCreationForm shrub("shrub");

	std::cout << boss;
	try
	{
		boss.decrementGrade();
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "c'est pas bien\n";
	}
	Bureaucrat boss3("boss3", 120);
	std::cout << boss3 << "la basede boss3\n";
	try
	{
		boss3.decrementGrade();
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "c'est pas bien\n";
	}
	std::cout << boss3;
	Bureaucrat boss4("boss4", 120);
	std::cout << boss4 << "la base de boss4\n";
	try
	{
		boss4.incrementGrade();
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "c'est pas bien\n";
	}
	std::cout << boss4;
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
	try
	{
		pres.execute(boss2);
	}
	catch (AForm::GradeTooLowException &e)
	{
		std::cout << "Execute error\n";
	}
	std::cout << Robot.getName() << std::endl;
	std::cout << Robot.getIsSigned() <<std::endl;
}
