/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 19:02:01 by silim             #+#    #+#             */
/*   Updated: 2022/01/16 22:26:22 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
};

Zombie::Zombie(std::string name){
	_name = name;
};

Zombie::~Zombie(){
	std::cout << _name << " is died" << std::endl;
};

void	Zombie::announce(void){
	std::cout << '<' << _name << "> BraiiiiiiinnnzzzZ..." << std::endl;
};

void	Zombie::setName(std::string name){
	_name = name;
};

std::string	Zombie::getName(){
	return _name;
};
