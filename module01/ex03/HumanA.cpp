/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 18:10:09 by silim             #+#    #+#             */
/*   Updated: 2022/01/28 18:10:10 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon){
};

HumanA::~HumanA(){
};

void	HumanA::attack(){
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
};
