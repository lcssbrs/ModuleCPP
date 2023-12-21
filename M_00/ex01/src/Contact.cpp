/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:54:53 by lseiberr          #+#    #+#             */
/*   Updated: 2023/12/20 12:09:46 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"

Contact::Contact(void)
{
	this->index = 0;
	this->last_name.clear();
	this->first_name.clear();
	this->nickname.clear();
	this->darkest_secret.clear();
	this->phone_number.clear();
}
Contact::~Contact(void)
{

}

void	Contact::set_info(void)
{
	std::string	input;

	std::cout << "Please enter the First Name of your contact" << std::endl;
	std::getline(std::cin, input);
	this->first_name = input;
	std::cout << "Please enter the Last Name of your contact" << std::endl;
	std::getline(std::cin, input);
	this->last_name = input;
	std::cout << "Please enter the nickname of your contact" << std::endl;
	std::getline(std::cin, input);
	this->nickname = input;
	std::cout << "Please enter the darkest secret of your contact" << std::endl;
	std::getline(std::cin, input);
	this->darkest_secret = input;
	std::cout << "Please enter the phone number of your contact" << std::endl;
	std::getline(std::cin, input);
	this->phone_number = input;
}

std::string	Contact::get_first_name(void)const
{
	return (this->first_name);
}

std::string	Contact::get_last_name(void)const
{
	return (this->last_name);
}

std::string	Contact::get_nickname(void)const
{
	return (this->nickname);
}

std::string	Contact::get_darkest_secret(void)const
{
	return (this->darkest_secret);
}
std::string	Contact::get_phone_number(void)const
{
	return(this->phone_number);
}

int	Contact::get_index(void)const
{
	return(this->index);
}

void	Contact::set_index(int count)
{
	this->index = count;
}

void	Contact::set_phone_number(std::string phone)
{
	this->phone_number = phone;
}

void	Contact::set_nickname(std::string nick)
{
	this->nickname = nick;
}

void	Contact::set_last_name(std::string last)
{
	this->last_name = last;
}

void	Contact::set_first_name(std::string first)
{
	this->first_name = first;
}

void	Contact::set_secret(std::string secret)
{
	this->darkest_secret = secret;
}
