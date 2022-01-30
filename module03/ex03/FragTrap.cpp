/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 20:14:04 by silim             #+#    #+#             */
/*   Updated: 2022/01/30 20:14:05 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	_hit_points = FHP;
	_energy_points = FEP;
	_attack_damage = FAD;
	std::cout << "FragTrap 생성자를 불러왔습니다." << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	_hit_points = FHP;
	_energy_points = FEP;
	_attack_damage = FAD;
	std::cout << "FragTrap 생성자를 불러왔습니다." << std::endl;
}

FragTrap::FragTrap(const FragTrap & frag_trap): ClapTrap(frag_trap)
{
	std::cout << "FragTrap 복사생성자를 불러왔습니다." << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap 소멸자를 불러왔습니다." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap & frag_trap) {
    _name = frag_trap._name;
    _hit_points= frag_trap._hit_points;
    _energy_points = frag_trap._energy_points;
    _attack_damage = frag_trap._attack_damage;
	std::cout << "FragTrap operator = (" << _name << ") called" << std::endl;
	return *this;
}

void	FragTrap::attack(std::string const& target) {
	std::cout << "FragTrap " << _name << "은 " << target << "에게 " << _attack_damage << "의 피해를 입혔습니다." << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << "님이 하이파이브를 요청하였습니다." << std::endl;
}
