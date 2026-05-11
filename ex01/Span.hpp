/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 17:41:33 by jow               #+#    #+#             */
/*   Updated: 2026/04/30 17:41:34 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

# include <exception>
#include <iterator>
# include <vector>
# include <algorithm>

class Span {
	private:
		unsigned int _maxNum;
		std::vector<int> _vec;

	public:
		Span();
		~Span();
		Span(const Span &other);
		Span &operator=(const Span &other);
		Span(unsigned int n);

		void addNumber(int n);
		int shortestSpan();
		int longestSpan();
		void fillNumber(std::vector<int>::iterator start,
			std::vector<int>::iterator end);

		class ContainerFullException : public std::exception
		{
			public:
				const char *what() const throw();
		} ;
		class NoResultException : public std::exception
		{
			public:
				const char *what() const throw();
		} ;
};

#endif
