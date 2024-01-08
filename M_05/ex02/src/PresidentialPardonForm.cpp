/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 10:54:01 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/08 15:26:24 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string newTarget) : AForm("default", 25, 5)
{
	std::cout << "constructor president called\n";
	this->target = newTarget;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & cpy) : AForm("default", 25, 5)
{
	*this = cpy;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & ope)
{
	*this = ope;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "destructor president called\n";
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() <= this->getIsExecuted() || executor.getGrade() < 5)
		throw AForm::GradeTooLowException();
	else if (this->getSignature() == false)
		throw AForm::GradeIsSignException();
	else
	{
		if (executor.getGrade() >= 5 && executor.getGrade() < 45)
			std::cout << this->target << " has beem pardoned bu Zaphod Beeblerox\n";

		else
			throw AForm::GradeTooLowException();
	}
}
