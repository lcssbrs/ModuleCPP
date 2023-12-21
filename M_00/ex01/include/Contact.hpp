/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <lseiberr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 19:58:45 by lseiberr          #+#    #+#             */
/*   Updated: 2023/12/20 11:36:41 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Contact
{
	public:
		Contact();
		~Contact();
		void		set_info(void);
		std::string	get_first_name(void)const;
		std::string	get_last_name(void)const;
		std::string	get_nickname(void)const;
		std::string	get_darkest_secret(void)const;
		std::string	get_phone_number(void)const;
		int			get_index(void)const;
		void		set_index(int count);
		void		set_first_name(std::string first);
		void		set_last_name(std::string first);
		void		set_nickname(std::string first);
		void		set_secret(std::string first);
		void		set_phone_number(std::string phone);

	private:
		int			index;
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};
