/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 16:37:21 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/08 15:29:55 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
# include <string>
# include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:
		AForm(std::string newName, int newSigned, int newExec);
		AForm(const AForm &cpy);
		AForm & operator=(const AForm &ope);
		virtual ~AForm();

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

		class GradeIsSignException : public std::exception
		{
			public:
				const char *what() const throw();
		};

		friend std::ostream &operator<<(std::ostream &o, const AForm &curr);
		std::string getName(void)const;
		int			getSignature(void)const;
		int			getIsSigned(void)const;
		int			getIsExecuted(void)const;

		void	beSigned(const Bureaucrat &curr);
		virtual void execute(Bureaucrat const & executor) const = 0;
	private:
		const std::string name;
		bool signature;
		const int isSigned;
		const int isExecuted;

	protected:
};


#endif
