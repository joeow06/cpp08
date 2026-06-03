/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 15:00:51 by jow               #+#    #+#             */
/*   Updated: 2026/05/17 15:00:52 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--ite;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}

// /*Replaced MutantStack with List and compare output of both*/
// int main()
// {
// 	std::list<int> mstack;

// 	mstack.push_back(5);
// 	mstack.push_back(17);

// 	std::cout << mstack.back() << std::endl;

// 	mstack.pop_back();

// 	std::cout << mstack.size() << std::endl;

// 	mstack.push_back(3);
// 	mstack.push_back(5);
// 	mstack.push_back(737);
// 	mstack.push_back(0);

// 	std::list<int>::iterator it = mstack.begin();
// 	std::list<int>::iterator ite = mstack.end();

// 	++it;
// 	--ite;
// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// 	std::list<int> s(mstack);
// 	return 0;
// }

// /*My own tests*/
// int main()
// {
// 	MutantStack<int> testStack;

// 	std::cout << "Stack size: " << testStack.size() << std::endl;
// 	MutantStack<int>::iterator it = testStack.begin();
// 	MutantStack<int>::iterator ite = testStack.end();
// 	if (it == ite)
// 		std::cout << "Empty stack" << std::endl;

// 	testStack.push(66);
// 	std::cout << "Stack size: " << testStack.size() << std::endl;
// 	for (MutantStack<int>::iterator it = testStack.begin(); it != testStack.end(); it++)
// 		std::cout << *it << std::endl;

// 	testStack.push(68);
// 	std::cout << "Stack size: " << testStack.size() << std::endl;
// 	for (MutantStack<int>::iterator it = testStack.begin(); it != testStack.end(); it++)
// 		std::cout << *it << std::endl;

// 	// test const
// 	std::cout << "\nTest Const" << std::endl;
// 	const MutantStack<int> testConst = testStack;
// 	for (MutantStack<int>::const_iterator it = testConst.begin(); it != testConst.end(); it++)
// 		std::cout << *it << std::endl;
// 	// testConst.push(100); //must fail cuz const stack
// }
// // use it == ite because when stack is empty, begin and end point to the same thing. 