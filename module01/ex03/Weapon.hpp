#ifndef __WEAPON_H__
# define __WEAPON_H__

#include <string>

class Weapon {
	private:
		std::string _type;

	public:
		Weapon(std::string type);
		const std::string&	getType();
		void	setType(std::string type);
		~Weapon();
};

#endif
