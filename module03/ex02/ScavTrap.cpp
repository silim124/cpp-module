#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	_hit_points = SHP;
	_energy_points = SEP;
	_attack_damage = SAD;
	std::cout << "ScavTrap 생성자를 불러왔습니다." << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	_hit_points = SHP;
	_energy_points = SEP;
	_attack_damage = SAD;
	std::cout << "ScavTrap 생성자를 불러왔습니다." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & scav_trap): ClapTrap(scav_trap)
{
	std::cout << "ScavTrap 복사생성자를 불러왔습니다." << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap 소멸자를 불러왔습니다." << std::endl;
}

ScavTrap& ScavTrap::operator = (const ScavTrap & scav_trap) {
    _name = scav_trap._name;
    _hit_points= scav_trap._hit_points;
    _energy_points = scav_trap._energy_points;
    _attack_damage = scav_trap._attack_damage;
	std::cout << "ScavTrap operator = (" << _name << ") called" << std::endl;
	return *this;
}

void	ScavTrap::attack(std::string const& target)
{
	std::cout << "ScavTrap " << _name << "은 " << target << "에게 " << _attack_damage << "의 피해를 입혔습니다." << std::endl;
}

void	ScavTrap::guardGate(void){
		std::cout << "Gate keeper mode에 진입하였습니다." << std::endl;

}
