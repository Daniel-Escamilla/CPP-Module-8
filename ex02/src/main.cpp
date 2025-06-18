/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 12:37:20 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/06/18 18:21:35 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MutantStack.hpp"

int main()
{
    MutantStack<int, std::vector<int> > stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << "Top: " << stack.top() << std::endl;

    std::cout << "Elements: ";
    for (MutantStack<int, std::vector<int> >::iterator it = stack.begin(); it != stack.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    stack.pop();
    std::cout << "After pop, top: " << stack.top() << std::endl;
    std::cout << "Size: " << stack.size() << std::endl;

    MutantStack<int, std::vector<int> > copyStack(stack);
    MutantStack<int, std::vector<int> > assignedStack;
    assignedStack = stack;

    std::cout << "CopyStack elements: ";
    for (MutantStack<int, std::vector<int> >::iterator it = copyStack.begin(); it != copyStack.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    std::cout << "AssignedStack elements: ";
    for (MutantStack<int, std::vector<int> >::iterator it = assignedStack.begin(); it != assignedStack.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;

    return 0;
}
