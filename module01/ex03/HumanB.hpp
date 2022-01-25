#ifndef __HUMANB_H__
# define __HUMANB_H__

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
