/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 18:10:01 by silim             #+#    #+#             */
/*   Updated: 2022/01/28 18:10:21 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL) {
};

HumanB::~HumanB(){
};

void	HumanB::attack(){
	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
};

void	HumanB::setWeapon(Weapon &weapon){
	_weapon = &weapon;
};
