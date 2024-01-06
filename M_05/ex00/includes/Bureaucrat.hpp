/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 14:47:19 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/06 15:38:11 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	public:
	//forme coplienne
		Bureaucrat();
		Bureaucrat(std::string newName, int newGrade);
		Bureaucrat(std::string newName);
		Bureaucrat(int newGrade);
		Bureaucrat(const Bureaucrat & cpy);
		Bureaucrat & operator=(const Bureaucrat & ope);
		friend std::ostream &operator<<( std::ostream &o, const Bureaucrat &curr );
		~Bureaucrat();

	//classe d'exception
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

	//getter
		std::string getName(void)const;
		int			getGrade(void)const;
	//increment or decrement grade
		void	incrementGrade(void);
		void	decrementGrade(void);
	private:
		std::string name;
		int grade;

	protected:
};

#endif
