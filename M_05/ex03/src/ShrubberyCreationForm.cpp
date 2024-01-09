/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 21:48:35 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/09 10:32:51 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"
#include <string>
#include <fstream>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string newTarget) : AForm("default", 145, 137)
{
	std::cout << "constructor shrubbery called\n";
	this->target = newTarget;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & cpy) : AForm("default", 145, 137)
{
	*this = cpy;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & ope)
{
	*this = ope;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "destructor shrubbery called\n";
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() <= this->getIsExecuted() || executor.getGrade() < 5)
		throw AForm::GradeTooLowException();
	else if (this->getSignature() == false)
		throw AForm::GradeIsSignException();
	else
	{
		if (executor.getGrade() >= 137 && executor.getGrade() <= 150)
		{
			std::string file = this->target + "_shrubbery";
			const char *filetarget = file.c_str();
			std::ofstream file2(filetarget);
			if (!file2.is_open())
				std::cerr << "error\n";
			file2 <<"         |\n";
			file2 <<"        | |\n";
			file2 <<"      | | | |\n";
			file2 <<"    | || | || |\n";
			file2.close();
		}
		else
			throw AForm::GradeTooLowException();
	}
}
