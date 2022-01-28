/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:52:36 by silim             #+#    #+#             */
/*   Updated: 2022/01/28 17:40:14 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int ac, char *av[])
{
	if (ac != 2){
		std::cout << "[ USAGE ] ./ex06 level_string" << std::endl;
		return (1);
	}
	Karen karen;
	karen.complain(av[1]);
	return (0);
}
