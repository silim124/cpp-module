/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 19:01:52 by silim             #+#    #+#             */
/*   Updated: 2022/01/15 18:08:40 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "string address from var: " << &str << std::endl;
	std::cout << "string address from ptr: " << stringPTR << std::endl;
	std::cout << "string address from ref: " << &stringREF << std::endl;
	std::cout << "=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=" << std::endl;

	std::cout << "string from var: " << str << std::endl;
	std::cout << "string from ptr: " << *stringPTR << std::endl;
	std::cout << "string from ref: " << stringREF << std::endl;

	return (0);
}
