/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 19:02:03 by silim             #+#    #+#             */
/*   Updated: 2022/01/28 17:58:55 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

#include <string>
#include <iostream>
#include <sstream>

class Zombie{
	private:
		std::string	_name;

	public:
		Zombie();
		Zombie(std::string name);
		void	announce(void);
		void	setName(std::string name);
		std::string	getName();
		~Zombie();
};
Zombie* zombieHorde(int N, std::string name);

#endif
