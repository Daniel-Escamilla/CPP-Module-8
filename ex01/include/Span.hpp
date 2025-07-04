/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:09:00 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/06/18 12:20:31 by daniel-esca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <limits>
# include <string>
# include <vector>
# include <iostream>
# include <algorithm>

class Span
{
	private:
		std::vector<int>	_array;
		unsigned int		_size;
	public:
		Span();
		Span(unsigned int N);
		~Span();
		Span(const Span &copy);
		Span &operator=(const Span &copy);

		void	addNumber(long number);
		
		unsigned int	shortestSpan(void);
		unsigned int	longestSpan(void);

		void	addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);

};

#endif // SPAN_HPP
