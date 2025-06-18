/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:08:56 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/06/18 11:23:54 by daniel-esca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

int main()
{
	Span list(3);

	try
	{
		list.addNumber(std::numeric_limits<int>::max());
		list.addNumber(std::numeric_limits<int>::min());

		std::cout << list.shortestSpan() << std::endl;
		std::cout << list.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}
