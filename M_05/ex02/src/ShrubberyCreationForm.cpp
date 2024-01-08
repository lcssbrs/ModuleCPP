/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 21:48:35 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/08 12:01:07 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"

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
	std::cout << "constructor shrubbery called\n";
}
