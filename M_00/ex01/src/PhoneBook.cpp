/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:50:51 by lseiberr          #+#    #+#             */
/*   Updated: 2023/12/20 12:13:41 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{

}

PhoneBook::~PhoneBook(void)
{

}

Contact	set_to_null(Contact myContact)
{
	myContact.set_first_name(NULL);
	myContact.set_last_name(NULL);
	myContact.set_nickname(NULL);
	myContact.set_secret(NULL);
	myContact.set_phone_number(NULL);
	return (myContact);
}

void	PhoneBook::display_contact_search(int count)
{
	std::cout << "Index = ";
	std::cout << this->contact[count].get_index();
	std::cout << " | First Name : ";
	std::cout << this->contact[count].get_first_name().substr(0, 10);
	std::cout << " | Last Name : ";
	std::cout << this->contact[count].get_last_name().substr(0, 10);
	std::cout << " | Nickname : ";
	std::cout << this->contact[count].get_nickname().substr(0, 10)  << std::endl;
}

void	PhoneBook::display_all(void)
{
	int i;

	i = 0;
	while (i < 8)
	{
		//if(!this->contact[i].get_darkest_secret().empty() && !this->contact[i].get_last_name().empty() && !this->contact[i].get_first_name().empty() && !this->contact[i].get_nickname().empty())
		display_contact_search(i);
		i++;
	}
}

void	PhoneBook::display_contact(int count)
{
	std::cout << "Index = ";
	std::cout << this->contact[count].get_index() << std::endl;
	std::cout << "Name : ";
	std::cout << this->contact[count].get_first_name();
	std::cout << " ";
	std::cout << this->contact[count].get_last_name()  << std::endl;
	std::cout << "Darkest Secret = ";
	std::cout << this->contact[count].get_darkest_secret() << std::endl;
	std::cout << "Phone Number = ";
	std::cout << this->contact[count].get_phone_number() << std::endl;
}

void	PhoneBook::search_contact(std::string input)
{
	int	count;

	//display_all();
	count = std::atoi(input.c_str()) - 1;
	if (count > 0 && count <= 8)
		this->display_contact(count);
	else
		std::cout << "Please enter a valid index" << std::endl;
}

void	PhoneBook::sort_contact(void)
{
	int	count;

	count = 0;
	while (count < 7)
	{
		this->contact[count] = this->contact[count + 1];
		this->contact[count].set_index(count);
		count++;
	}
	this->contact[count] = set_to_null(this->contact[count]);
}

void	PhoneBook::add_new_contact(Contact newContact)
{
	static int	index_phone;

	if (index_phone > 7)
		index_phone %= 8;
	this->contact[index_phone] = newContact;
	this->contact[index_phone].set_index(index_phone + 1);
	index_phone += 1;
}
