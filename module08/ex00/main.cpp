/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 18:01:59 by silim             #+#    #+#             */
/*   Updated: 2022/02/03 18:02:40 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int>			vect;
	std::vector<int>::iterator	tmp;

	for (int i = 0; i < 100; i += 2)
		vect.push_back(i);
	for (int i = 0; i < 11; i++)
	{
		try
		{
			std::cout << "찾을 값: " << i * i << std::endl;
			easyfind(vect, i * i);
			std::cout << "성공!" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
			std::cout << "실패!" << std::endl;
		}
		std::cout << std::endl;
	}
	return 0;
}
