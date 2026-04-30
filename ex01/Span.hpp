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

class Span {
	private:
		unsigned int _maxNum;

	public:
		Span();
		~Span();
		Span(const Span &other);
		Span &operator=(const Span &other);

		void addNumber();
		int shortestSpan();
		int longestSpan();
};

#endif
