/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 10:54:01 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/08 12:00:19 by lseiberr         ###   ########.fr       */
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
