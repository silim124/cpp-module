/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 19:01:52 by silim             #+#    #+#             */
/*   Updated: 2022/01/28 17:55:00 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie *heap_zombie = newZombie("heap_zombie");

	randomChump("stack_zombie");
	heap_zombie->announce();
	delete heap_zombie;
	return (0);
}
