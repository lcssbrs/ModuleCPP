/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 08:53:57 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/08 15:30:23 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMUREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(std::string newTarget);
		RobotomyRequestForm(const RobotomyRequestForm & cpy);
		RobotomyRequestForm & operator=(const RobotomyRequestForm & ope);
		~RobotomyRequestForm();
		void execute(Bureaucrat const & executor) const;
	private:
		std::string target;
	protected:
};

#endif
