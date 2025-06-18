/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 12:37:25 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/06/18 18:00:51 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack()
{
    
}

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack()
{
    
}

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack& copy)
    : std::stack<T, Container>(copy)
{
    
}

template <typename T, typename Container>
MutantStack<T, Container>& MutantStack<T, Container>::operator=(const MutantStack& copy)
{
    if (this != &copy)
        std::stack<T, Container>::operator=(copy);
    return (*this);
}

template <typename T, typename Container>
typename Container::iterator MutantStack<T, Container>::begin()
{
    return this->c.begin();
}

template <typename T, typename Container>
typename Container::iterator MutantStack<T, Container>::end()
{
    return this->c.end();
}
