/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 20:05:50 by silim             #+#    #+#             */
/*   Updated: 2022/01/16 22:27:03 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string	to_string(int num){
	std::string result;
	std::ostringstream convert;

	convert << num;
	result = convert.str();
	return (result);
}

Zombie* zombieHorde(int N, std::string name){
	Zombie *zombies = new Zombie[N];
	for (int i = 0; i < N; i++){
		zombies[i].setName(name + to_string(i));
		std::cout << zombies[i].getName() << " is created" << std::endl;
	}
	return zombies;
};
