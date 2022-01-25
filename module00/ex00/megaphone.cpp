/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 00:30:57 by silim             #+#    #+#             */
/*   Updated: 2022/01/25 23:16:50 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	PrintUpper(std::string s){
	int	len = s.length();
	for (int i = 0; i < len; i++)
		std::cout << (char)toupper(s[i]);
}

int	main(int ac, char **av){
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1; i < ac; i++)
			PrintUpper(av[i]);
	std::cout << std::endl;
	return (0);
}
