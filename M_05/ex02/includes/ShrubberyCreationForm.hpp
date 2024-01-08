/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 21:34:12 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/08 15:34:42 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <iostream>

class ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm(std::string newTarget);
		ShrubberyCreationForm(const ShrubberyCreationForm &cpy);
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm &ope);
		~ShrubberyCreationForm();
		void execute(Bureaucrat const & executor) const;
	private:
		std::string target;
	protected:
};

#endif
