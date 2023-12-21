/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:54:48 by lseiberr          #+#    #+#             */
/*   Updated: 2023/12/20 11:52:16 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

void	phonebook_exit(void)
{
	std::cout << "Thanks for using My Awesome PhoneBook" RESET_COLOR << std::endl;
	std::cout << "Hope to see you soon" RESET_COLOR << std::endl;
	exit (0);
}

void	print_command(void)
{
	std::cout << "Please enter " GREEN "'ADD'" RESET_COLOR " if you want to add contact" << std::endl;
	std::cout << "Please enter " YELLOW "'SEARCH'" RESET_COLOR " if you want to search for a contact" << std::endl;
	std::cout << "Please enter " RED "'EXIT'" RESET_COLOR " if you want to exit the PhoneBook" << std::endl;
}

void	add_contact_main(PhoneBook *myPhoneBook)
{
	Contact newContact;
	newContact.set_info();
	myPhoneBook->add_new_contact(newContact);
}

void	search_info(PhoneBook myPhoneBook)
{
	std::string input;

	myPhoneBook.display_all();
	std::cout << "Please enter the index of the contact you want to display" << std::endl;
	std::getline(std::cin, input);
	myPhoneBook.search_contact(input);
}

int	main(int ac, char **ag)
{
	std::string input;
	PhoneBook myPhoneBook;

	(void)ag;
	if (ac > 1)
	{
		std::cout << "Please, to use this " BLUE "Awesome PhoneBook" RESET_COLOR " do not enter parameter and let you guide" << std::endl;
		return (0);
	}
	std::cout << CYAN "Welcome To My Awesome PhoneBook" RESET_COLOR << std::endl;
	while (1)
	{
		print_command();
		std::getline(std::cin, input);
		if (input.compare("ADD") == 0 || input.compare ("add") == 0)
			add_contact_main(&myPhoneBook);
		else if (input.compare("SEARCH") == 0 || input.compare("search") == 0)
			search_info(myPhoneBook);
		else if (input.compare("EXIT") == 0 || input.compare("exit") == 0)
			phonebook_exit();
		else
			std::cout << "Please enter, valid input" << std::endl;
	}

}
