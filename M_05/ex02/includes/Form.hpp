/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 16:37:21 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/06 22:06:56 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
# include <string>
# include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(const Form &cpy);
		Form & operator=(const Form &ope);
		virtual ~Form();

		class GradeTooLowException : public std::exception
		{
			public:
			const char *what() const throw();
		};

		class GradeTooHighException : public std::exception
		{
			public:
			const char *what() const throw();
		};

		friend std::ostream &operator<<(std::ostream &o, const Form &curr);
		std::string getName(void)const;
		int			getSignature(void)const;
		int			getIsSigned(void)const;
		int			getIsExecuted(void)const;

		void	beSigned(const Bureaucrat &curr);
	private:
		const std::string name;
		bool signature;
		const int isSigned;
		const int isExecuted;

	protected:
};

#endif
