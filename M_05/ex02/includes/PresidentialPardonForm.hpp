/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 10:43:59 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/08 15:25:41 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(std::string newTarget);
		PresidentialPardonForm(const PresidentialPardonForm &cpy);
		PresidentialPardonForm & operator=(const PresidentialPardonForm & ope);
		~PresidentialPardonForm();
		void execute(Bureaucrat const & executor) const;
	private:
		std::string target;
	protected:
};

#endif
