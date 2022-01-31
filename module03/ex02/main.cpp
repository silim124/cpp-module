/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 20:13:39 by silim             #+#    #+#             */
/*   Updated: 2022/01/30 20:24:33 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	a("a");
	ScavTrap	b("b");
	std::cout << std::endl;

	a.attack("b");
	b.takeDamage(a.getAttackDamage());
	std::cout << std::endl;

	b.attack("a");
	a.takeDamage(b.getAttackDamage());
	std::cout << std::endl;

	a.attack("b");
	b.takeDamage(a.getAttackDamage());
	std::cout << std::endl;

	b.attack("a");
	a.takeDamage(b.getAttackDamage());
	std::cout << std::endl;

	b.guardGate();
	std::cout << std::endl;

	a.highFivesGuys();
	std::cout << std::endl;

	return (0);
}
