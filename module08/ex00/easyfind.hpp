/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 18:01:57 by silim             #+#    #+#             */
/*   Updated: 2022/02/03 18:05:18 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class EndOfContainer: public std::exception
{
	virtual const char* what() const throw()
	{
		return ("컨테이너에 해당 값이 없습니다.");
	}
};

template<typename T>
typename T::iterator	easyfind(T &container, int n)
{
	typename T::iterator	tmp;

	tmp = find(container.begin(), container.end(), n);
	if (tmp == container.end())
		throw EndOfContainer();
	return tmp;
}

#endif
