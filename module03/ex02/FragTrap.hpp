#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

#define FHP				100
#define FEP				100
#define FAD				30

class FragTrap: public ClapTrap
{
	public:
		FragTrap();
		FragTrap(FragTrap const& frag_trap);
		FragTrap(std::string name);

		void		attack(std::string const& target);
		void		highFivesGuys(void);

		FragTrap&	operator=(FragTrap const& frag_trap);

		~FragTrap();
};

#endif
