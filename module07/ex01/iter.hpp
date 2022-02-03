/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:28:19 by silim             #+#    #+#             */
/*   Updated: 2022/02/03 15:13:25 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename T>
void iter(T *array, size_t array_size, void(*f)(T const &))
{
	for (size_t i = 0; i < array_size; i++)
		f(array[i]);
}

template <typename T>
void print(T const & x)
{
	std::cout << x << std::endl;
	return;
}

#endif
