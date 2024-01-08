/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 08:57:16 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/08 15:36:39 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"
#include <time.h>
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm(std::string newTarget) : AForm("default", 72, 45)
{
	this->target = newTarget;
	std::cout << "constructor robot called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & cpy) : AForm("default", 72, 45)
{
	*this = cpy;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &ope)
{
	*this = ope;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "destructor robot called\n";
}


void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() <= this->getIsExecuted() || executor.getGrade() < 5)
		throw AForm::GradeTooLowException();
	else if (this->getSignature() == false)
		throw AForm::GradeIsSignException();
	else
	{
		if (executor.getGrade() >= 45 && executor.getGrade() < 137)
		{
			int random;
			srand (time(NULL));
			random = rand() % 10 + 1;
			if (random % 2 == 0)
				std::cout << this->target << " has been robotized\n";
			else
				std::cout << "robotized has failed\n";
		}
		else
			throw AForm::GradeTooLowException();
	}
}
