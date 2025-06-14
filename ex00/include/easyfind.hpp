/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:49:51 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/06/14 19:31:34 by daniel-esca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream> 
# include <algorithm>
# include <iterator>
# include <stdexcept>
# include <vector>

template<typename T>
typename T::iterator easyfind(T& container, int value);

# include "easyfind.tpp"

#endif
