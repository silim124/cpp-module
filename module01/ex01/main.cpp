/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 19:01:52 by silim             #+#    #+#             */
/*   Updated: 2022/01/28 22:07:25 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombies;

	zombies = zombieHorde(10, "zombie");
	zombies->announce();
	for (int i = 0; i < 10; i++)
		zombies[i].announce();
	delete[] zombies;
	return (0);
}
