#ifndef __HUMANA_H__
# define __HUMANA_H__

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA{
	private:
		std::string	_name;
		Weapon		&_weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		void	attack();
		~HumanA();
};

#endif
