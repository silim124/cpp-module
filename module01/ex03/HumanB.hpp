/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 18:09:57 by silim             #+#    #+#             */
/*   Updated: 2022/01/28 18:09:58 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_HPP__
# define __HUMANB_HPP__

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB{
	private:
		std::string	_name;
		Weapon		*_weapon;

	public:
		HumanB(std::string name);
		void	attack();
		void	setWeapon(Weapon &weapon);
		~HumanB();
};

#endif
