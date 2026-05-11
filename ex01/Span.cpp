/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 17:41:31 by jow               #+#    #+#             */
/*   Updated: 2026/04/30 17:41:32 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iterator>
#include <limits>

Span::Span() : _maxNum(0) {}

Span::~Span() {}

Span::Span(const Span &other) : _maxNum(other._maxNum), _vec(other._vec) {}

Span& Span::operator=(const Span &other)
{
	if (this != &other)
	{
		this->_maxNum = other._maxNum;
		this->_vec = other._vec;
	}
	return *this;
}

Span::Span(unsigned int n) : _maxNum(n) {}

void Span::addNumber(int n)
{
	if (_vec.size() >= _maxNum)
		throw ContainerFullException();
	_vec.push_back(n);
}

int Span::shortestSpan()
{
	if (_vec.size() < 2)
		throw NoResultException();
	std::vector<int> temp = _vec;
	std::sort(temp.begin(), temp.end());
	int best = std::numeric_limits<int>::max();
	for (size_t i = 1; i < temp.size(); i++)
	{
		int diff = temp[i] - temp[i - 1];
		if (diff < best)
			best = diff;
	}
	return best;
}

int Span::longestSpan()
{
	if (_vec.size() < 2)
		throw NoResultException();
	int min = *std::min_element(_vec.begin(), _vec.end());
	// returns an iterator so need *
	int max = *std::max_element(_vec.begin(), _vec.end());
	return (max - min);
}

void Span::fillNumber(std::vector<int>::iterator start,
			std::vector<int>::iterator end)
{
	if ((_vec.size() + std::distance(start, end)) > _maxNum)
		throw ContainerFullException();
	_vec.insert(_vec.end(), start, end);
}


const char* Span::ContainerFullException::what() const throw()
{
	return ("Vector is full, unable to add new elements...");
}

const char* Span::NoResultException::what() const throw()
{
	return ("No results available...");
}
