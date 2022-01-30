#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a("미니언");
	ClapTrap	b;
	ClapTrap	c("원거리 미니언");
	ClapTrap	d(c);

	std::cout << std::endl;
	a.attack("적 미니언");
	b.attack("적 원거리 미니언");
	d.attack("적 챔피언");
	std::cout << std::endl;
	d.takeDamage(15);
	a.takeDamage(5);
	std::cout << std::endl;
	a.beRepaired(25);
	std::cout << std::endl;
	std::cout << "c의 hp : " << c.getHitpoints() << std::endl;
	std::cout << "d의 hp : " << d.getHitpoints() << std::endl;
	c.takeDamage(5);
	std::cout << "c의 hp : " << c.getHitpoints() << std::endl;
	std::cout << "d의 hp : " << d.getHitpoints() << std::endl;
	d.takeDamage(8);
	std::cout << "c의 hp : " << c.getHitpoints() << std::endl;
	std::cout << "d의 hp : " << d.getHitpoints() << std::endl;

	return (0);
}
