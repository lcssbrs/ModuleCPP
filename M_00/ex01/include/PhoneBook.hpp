/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:58:54 by lseiberr          #+#    #+#             */
/*   Updated: 2023/12/20 11:47:49 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <string.h>
#include <stdlib.h>

#define RESET_COLOR  "\033[1;0m"
#define RED  "\033[1;31m"
#define BLACK  "\033[1;30m"
#define GREEN  "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define BLUE  "\033[1;34m"
#define MAGENTA  "\033[1;35m"
#define CYAN  "\033[1;36m"
#define WHITE  "\033[1;37m"


class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void	add_new_contact(Contact newContact);
		void	search_contact(std::string);
		void	sort_contact(void);
		void	display_contact(int count);
		void	display_all(void);
		void	display_contact_search(int count);

	private:
		Contact contact[8];
};
