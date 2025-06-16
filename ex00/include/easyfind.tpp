/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daniel-escamilla <daniel-escamilla@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 18:49:57 by daniel-esca       #+#    #+#             */
/*   Updated: 2025/06/16 10:04:49 by daniel-esca      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template<typename T>
typename T::iterator easyfind(T& container, int value)
{
	typename T::iterator it;
	it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw std::out_of_range("Value not found");
	return it;
}
