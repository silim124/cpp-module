/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 19:02:03 by silim             #+#    #+#             */
/*   Updated: 2022/01/16 18:21:00 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
# define __ZOMBIE_H__

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
