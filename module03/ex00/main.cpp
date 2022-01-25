#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a("미니언");
	ClapTrap	b;
	ClapTrap	c("원거리 미니언");
	ClapTrap	d(c);

	std::cout << std::endl;
	a.attack("b");
	b.attack("a");
	d.attack("b");
	std::cout << std::endl;
	d.takeDamage(15);
	a.takeDamage(5);
	std::cout << std::endl;
	a.beRepaired(25);
	std::cout << std::endl;
	return (0);
}
