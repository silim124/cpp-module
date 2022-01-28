/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 19:02:03 by silim             #+#    #+#             */
/*   Updated: 2022/01/28 17:58:41 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

#include <string>
#include <iostream>

class Zombie{
	private:
		std::string	_name;

	public:
		Zombie();
		Zombie(std::string name);
		void	announce(void);
		~Zombie();
};
Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
