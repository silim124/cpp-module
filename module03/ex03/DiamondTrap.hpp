#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	public:
		DiamondTrap();
		DiamondTrap(DiamondTrap const& diamond_trap);
		DiamondTrap(std::string name);
		~DiamondTrap();

		DiamondTrap&	operator=(DiamondTrap const& diamond_trap);

		void			whoAmI(void) const;
		using			ScavTrap::_attack_damage;
		using			ScavTrap::_energy_points;

	private:
		std::string		_name;
};

#endif
