/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 20:13:17 by silim             #+#    #+#             */
/*   Updated: 2022/01/30 20:13:18 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	a;
	ScavTrap	b("b");
	ScavTrap	c;

	std::cout << std::endl;
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());

	std::cout << std::endl;

	b.attack(a.getName());
	a.takeDamage(b.getAttackDamage());

	std::cout << std::endl;

	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());

	std::cout << std::endl;

	b.attack(a.getName());
	a.takeDamage(b.getAttackDamage());

	std::cout << std::endl;

	b.guardGate();

	std::cout << std::endl;
	return (0);
}
