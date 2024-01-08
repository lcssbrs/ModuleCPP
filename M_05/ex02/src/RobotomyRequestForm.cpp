/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 08:57:16 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/08 11:55:39 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string newTarget) : AForm("default", 72, 45)
{
	std::cout << "constructor robot called\n";
	this->target = newTarget;
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

