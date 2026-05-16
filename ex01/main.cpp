/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 17:41:28 by jow               #+#    #+#             */
/*   Updated: 2026/04/30 17:41:29 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span numbers = Span(10000);
	std::vector<int> tmp;
	for (int i = 0; i < 10000; ++i)
		tmp.push_back(i);
	numbers.fillNumber(tmp.begin(), tmp.end());

	std::cout << numbers.shortestSpan() << std::endl;
	std::cout << numbers.longestSpan() << std::endl;

	try {
		numbers.addNumber(10);
	}
	catch (const std::exception &e) {
		std::cerr << "Container is full" << std::endl;
	}
}
