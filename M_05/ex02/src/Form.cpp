/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 16:36:59 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/06 17:38:47 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

Form::Form() : isSigned(150), isExecuted(1)
{
	(std::string)this->name = "default";
	this->signature = false;
}

Form::Form(const Form &cpy) : name("default"), signature(false), isSigned(150), isExecuted(1)
{
	*this = cpy;
}

Form & Form::operator=(const Form & ope)
{
	(std::string)this->name = ope.getName();
	return *this;
}

Form::~Form()
{

}

std::string Form::getName(void)const
{
	return this->name;
}

int Form::getSignature(void)const
{
	return (this->signature);
}

int Form::getIsSigned(void)const
{
	return (this->isSigned);
}

int Form::getIsExecuted(void)const
{
	return (this->isExecuted);
}

std::ostream &operator<<(std::ostream &o, const Form &curr)
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

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

void	Form::beSigned(const Bureaucrat &curr)
{
	if (curr.getGrade() > 150)
		throw Form::GradeTooLowException();
	else
		this->signature = true;
}
