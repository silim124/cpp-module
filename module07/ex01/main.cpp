/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:28:22 by silim             #+#    #+#             */
/*   Updated: 2022/02/03 12:28:23 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int tab[] = { 0, 1, 2, 3, 4 };
	std::cout << "Origin: " << "{ 0, 1, 2, 3, 4 }" << std::endl;
	::iter(tab, sizeof(*tab), print);
	std::cout << std::endl;

	std::string str = "this is test";
	std::cout << "Origin: \"" << str << '\"' << std::endl;
	iter(str.c_str(), str.length(), print);
	std::cout << std::endl;

	return 0;
}
