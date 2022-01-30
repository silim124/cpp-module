#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

#define HP				10
#define EP				10
#define AD				0

class	ClapTrap
{
	private :
		std::string		_name;
		unsigned int	_hit_points;
		unsigned int	_energy_points;
		unsigned int	_attack_damage;

	public :
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap & clap_trap);
		ClapTrap & operator=(const ClapTrap & clap_trap);

		void attack(std::string const& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string		getName( void ) const;
		unsigned int	getHitpoints( void ) const;
		unsigned int	getEnergyPoints( void ) const;
		unsigned int	getAttackDamage( void ) const;

		~ClapTrap();
};

#endif
