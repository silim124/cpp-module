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
