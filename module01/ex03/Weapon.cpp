/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 18:09:52 by silim             #+#    #+#             */
/*   Updated: 2022/01/28 18:09:53 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type){
	_type = type;
};

const std::string&	Weapon::getType(){
	return _type;
};

void	Weapon::setType(std::string type){
	_type = type;
};

Weapon::~Weapon(){
};
