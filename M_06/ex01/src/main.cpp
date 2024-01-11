/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lseiberr <marvin@42perpignan.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:52:00 by lseiberr          #+#    #+#             */
/*   Updated: 2024/01/11 09:34:24 by lseiberr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"
#include "../includes/Data.hpp"

int main (void)
{
	uintptr_t test;

	Serializer serial;
	Data newData;
	std::cout << newData.getTest() << std::endl;
	test = serial.serialize(&newData);
	std::cout << &test << std::endl;
	std::cout << &newData << std::endl;
	Data *dataTest;
	dataTest = serial.deserialize(test);
	std::cout << dataTest->getTest() << std::endl;
	std::cout << &test << std::endl;
	std::cout << &dataTest << std::endl;
	(void)test;
	//std::cout << "Check the main, not instantiabl class yet\n";
}
