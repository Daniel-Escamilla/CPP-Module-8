/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:08:50 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/06/18 12:21:27 by daniel-esca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

Span::Span()
{
	_size = 0;
}

Span::Span(unsigned int N)
{
	_size = N;
	_array.reserve(_size);
}

Span::~Span()
{
	
}

Span::Span(const Span &copy)
{
	_size = copy._size;
	_array = copy._array;
}

Span &Span::operator=(const Span &copy)
{
	if (this != &copy)
	{
		_array = copy._array;
		_size = copy._size;
	}
	return (*this);
}

void	Span::addNumber(long number)
{
	if (number > std::numeric_limits<int>::max())
		throw std::overflow_error("Value exceeds int max");
	else if (number < std::numeric_limits<int>::min())
		throw std::underflow_error("Value exceeds int min");
	else if (_array.size() >= _size)
		throw std::length_error("Reach space limit");
		
	_array.push_back((int)number);
}

unsigned int	Span::shortestSpan(void)
{
	if (_array.size() < 2)
		throw std::logic_error("Not enough elements");
	unsigned int shortest = 0;
	std::vector<int> sorted(_array);
	std::sort(sorted.begin(), sorted.end());
	for (unsigned int i = 1; i < sorted.size(); i++)
	{
		unsigned int diff = sorted[i] - sorted[i - 1];
		if (diff < shortest || i == 1)
			shortest = diff;
	}
	return (shortest);
}

unsigned int	Span::longestSpan(void)
{
	if (_array.size() < 2)
		throw std::logic_error("Not enough elements");
	unsigned int longest = 0;
	std::vector<int> sorted(_array);
	std::sort(sorted.begin(), sorted.end());
	for (unsigned int i = 1; i < sorted.size(); i++)
	{
		unsigned int diff = sorted[i] - sorted[i - 1];
		if (diff > longest || i == 1)
			longest = diff;
	}
	return (longest);
}

void	Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	for (; begin != end; begin++)
		addNumber(*begin);
}