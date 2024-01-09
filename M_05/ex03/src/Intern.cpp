/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 09:51:56 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/09 10:29:53 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

Intern::Intern()
{
	std::cout << "Constructor intern\n";
}

Intern::Intern(const Intern &cpy)
{
	*this = cpy;
}

Intern & Intern::operator=(const Intern &ope)
{
	(void)ope;
	return *this;
}

Intern::~Intern()
{
	std::cout << "destrcutor intern called\n";
}

AForm *Intern::makeForm(std::string nameForm, std::string targetForm)
{
	std::string nameAllForm[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	AForm *form[3] = {new PresidentialPardonForm(targetForm), new RobotomyRequestForm(targetForm), new ShrubberyCreationForm(targetForm)};
	int i = -1;
	int j = -1;

	while (++i < 3)
	{
		if (nameForm.compare(nameAllForm[i]) == 0)
		{
			j = -1;
			while (++j < 3)
			{
				if (j != i)
					delete form[j];
			}
			std::cout << "Intern created " << nameForm << std::endl;
			return form[i];
		}
	}
	std::cout << "form cannot be created\n";
	return (NULL);
}
