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

		void			attack(std::string const& target);
		void			whoAmI() const;

	private:
		std::string		_name;
};

#endif
