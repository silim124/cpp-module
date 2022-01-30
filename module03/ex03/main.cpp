/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 20:14:10 by silim             #+#    #+#             */
/*   Updated: 2022/01/30 20:14:10 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap a("A");
	DiamondTrap b("B");
	std::cout << std::endl;

	a.whoAmI();
	b.whoAmI();
	b.highFivesGuys();
	std::cout << std::endl;

	a.attack("B");
	b.takeDamage(a.getAttackDamage());
	std::cout << std::endl;

	a.attack("B");
	b.takeDamage(a.getAttackDamage());
	std::cout << std::endl;

	a.guardGate();
	std::cout << std::endl;

	return (0);
}
