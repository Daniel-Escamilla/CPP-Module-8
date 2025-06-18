/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 12:37:23 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/06/18 18:21:56 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <vector>
# include <deque>
# include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack: public std::stack<T, Container>
{
	private:
		
	public:
		typedef typename Container::iterator iterator;
		
		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack& copy);
		MutantStack& operator=(const MutantStack& copy);
		
		iterator begin();
		iterator end();
		
		

};

# include "MutantStack.tpp"

#endif // MUTANTSTACK_HPP
