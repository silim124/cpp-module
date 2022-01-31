/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 20:14:07 by silim             #+#    #+#             */
/*   Updated: 2022/01/30 23:01:20 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

#define FHP				100
#define FEP				100
#define FAD				30

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(FragTrap const& frag_trap);
		FragTrap(std::string name);

		void		highFivesGuys(void);
		void		attack(std::string const& target);

		FragTrap&	operator=(FragTrap const& frag_trap);

		~FragTrap();
};

#endif
