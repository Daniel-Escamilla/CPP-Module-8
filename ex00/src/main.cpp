/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:49:33 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/06/14 19:34:41 by daniel-esca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/easyfind.hpp"

int main()
{
	std::vector<int> container;
	container.push_back(123);
	container.push_back(2);
	container.push_back(51);
	container.push_back(1412);
	container.push_back(234);
	container.push_back(98765432);

	std::vector<int>::iterator result;
	try
	{
		result = easyfind(container, 12);
		std::cout << *result << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}