/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 15:28:39 by jow               #+#    #+#             */
/*   Updated: 2026/04/30 15:28:40 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <deque>
#include <vector>

int main()
{
	std::cout << "------- Vector test -------" << std::endl;
	std::vector<int> container;
	for (int i = 0; i < 10; i++)
		container.push_back(i);
	for (int i = 0; i < 10; i++)
		std::cout << container[i] << ", ";
	std::cout << std::endl;
	try {
		std::vector<int>::iterator it = easyfind(container, 1);
		std::cout << "Found: " << *it << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		std::vector<int>::iterator it = easyfind(container, 42);
		std::cout << "Found: " << *it << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "-------- Deque test -------" << std::endl;
	std::deque<int> container2;
	for (int i = 90; i < 100; i++)
		container2.push_back(i);
	for (int i = 0; i < 10; i++)
		std::cout << container2[i] << ", ";
	std::cout << std::endl;
	try {
		std::deque<int>::iterator it = easyfind(container2, 99);
		std::cout << "Found: " << *it << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		std::deque<int>::iterator it = easyfind(container2, 42);
		std::cout << "Found: " << *it << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::cout << "-------- First Occurance test -------" << std::endl;
	std::vector<char> firstOcc;
	for (int i = 65; i < 70; i++)
	{
		firstOcc.push_back(static_cast<char>(i));
	}
	firstOcc.push_back('A');
	for (int i = 0; i < 6; i++)
		std::cout << firstOcc[i] << ", ";
	std::cout << std::endl;
	try
	{
		//finding first occurance of 'A'
		std::vector<char>::iterator it = easyfind(firstOcc, 'A');
		void* foundAddr = static_cast<void*>(&(*it));
		void* firstAddr = static_cast<void*>(&firstOcc[0]);
		void* lastAddr  = static_cast<void*>(&firstOcc[10]);
		std::cout << "Found value: " << *it << "\n";
		std::cout << "Address(found) : " << foundAddr << "\n";
		std::cout << "Address([0])   : " << firstAddr << "\n";
		std::cout << "Address([10])  : " << lastAddr << "\n";
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::cout << "------- Empty container test -------" << std::endl;
	std::vector<int> empty;
	try {
		std::vector<int>::iterator it = easyfind(empty, 1);
		std::cout << "Found: " << *it << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}
