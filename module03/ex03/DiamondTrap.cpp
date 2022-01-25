#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("unknown_clap_name"), _name("unknown")
{
	_hit_points = FHP;
	_energy_points = FEP;
	_attack_damage = FAD;
	std::cout << "DiamondTrap 생성자를 불러왔습니다." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), _name(name)
{
	_hit_points = FHP;
	_energy_points = FEP;
	_attack_damage = FAD;
	std::cout << "DiamondTrap 생성자를 불러왔습니다." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap & diamond_trap): ClapTrap(diamond_trap)
{
	std::cout << "DiamondTrap 복사생성자를 불러왔습니다." << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap 소멸자를 불러왔습니다." << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap & diamond_trap) {
	FragTrap::operator=(diamond_trap);
	_name = diamond_trap._name;
	std::cout << "diamondTrap operator = (" << _name << ") called" << std::endl;
	return *this;
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "이 DiamondTrap의 이름은 " << _name << "이고 이 ClapTrap의 이름은 " << ClapTrap::_name << "입니다." << std::endl;
}
