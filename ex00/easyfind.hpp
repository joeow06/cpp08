/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 15:28:35 by jow               #+#    #+#             */
/*   Updated: 2026/04/30 15:28:36 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>
#include <exception>
#include <algorithm>

class NoOccurenceFoundException : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("No occurence is found");
		}
};


template <typename T>
typename T::iterator easyfind(T &container, int num)
{
		typename T::iterator it = std::find(container.begin(), container.end(), num);
		if (it == container.end())
			throw NoOccurenceFoundException();
		return it;
}

template <typename T>
typename T::const_iterator easyfind(const T &container, int num)
{
		typename T::const_iterator it = std::find(container.begin(), container.end(), num);
		if (it == container.end())
			throw NoOccurenceFoundException();
		return it;
}

#endif
