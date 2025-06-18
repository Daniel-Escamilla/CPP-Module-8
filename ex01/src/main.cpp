/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 10:08:56 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/06/18 12:36:42 by daniel-esca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

int main()
{
	Span list(7);
	int arr[] = {12, 34, 21, 1, 432, 7654321};
	std::vector<int> numbers(arr, arr + 6);

	try
	{
		list.addRange(numbers.begin(), numbers.end());

		std::cout << list.shortestSpan() << std::endl;
		std::cout << list.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
