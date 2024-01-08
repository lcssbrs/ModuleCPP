/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 21:48:35 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/06 21:58:47 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : sign(145), exec(137)
{

}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & cpy) : sign(145), exec(137)
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

}

