/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 18:10:05 by silim             #+#    #+#             */
/*   Updated: 2022/01/28 18:10:06 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_HPP__
# define __HUMANA_HPP__

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
