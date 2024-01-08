/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 16:36:59 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/08 11:56:13 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

AForm::AForm(std::string newName, int newSigned, int newExec) : name(newName), isSigned(newSigned), isExecuted(newExec)
{
	std::cout << "constructor form called\n";
	this->signature = false;
}

AForm::AForm(const AForm &cpy) : name("default"), isSigned(145), isExecuted(137)
{
	*this = cpy;
}

AForm & AForm::operator=(const AForm & ope)
{
	(std::string)this->name = ope.getName();
	return *this;
}

AForm::~AForm()
{
	std::cout << "destructor form called\n";
}

std::string AForm::getName(void)const
{
	return this->name;
}

int AForm::getSignature(void)const
{
	return (this->signature);
}

int AForm::getIsSigned(void)const
{
	return (this->isSigned);
}

int AForm::getIsExecuted(void)const
{
	return (this->isExecuted);
}

std::ostream &operator<<(std::ostream &o, const AForm &curr)
{
	o << "name is:" << curr.getName() <<std::endl;
	o << "isSigned is" << curr.getIsSigned() << std::endl;
	o << "isExecuted is" << curr.getIsExecuted() << std::endl;
	if (curr.getSignature() == true)
		o << "signature is ok" << std::endl;
	else
		o << "signature is not ok" << std::endl;
	return o;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

void	AForm::beSigned(const Bureaucrat &curr)
{
	if (curr.getGrade() > 150)
		throw AForm::GradeTooLowException();
	else
		this->signature = true;
}
