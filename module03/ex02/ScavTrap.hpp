/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 20:13:47 by silim             #+#    #+#             */
/*   Updated: 2022/01/30 20:13:48 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

#define SHP				100
#define SEP				50
#define SAD				20

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const& scav_trap);
		~ScavTrap();

		ScavTrap&	operator=(ScavTrap const& scav_trap);

		void		attack(std::string const& target);
		void		guardGate(void);

	protected:
		bool		_guard_mode;
};

#endif
