/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:34:15 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/10 13:44:50 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

class Serializer
{
	public:
		virtual ~Serializer();
		uintptr_t serialize(Data* ptr);
	private:
		Serializer();
		Serializer(const Serializer & cpy);
		Serializer & operator=(const Serializer & ope);


	protected:

};

#endif
