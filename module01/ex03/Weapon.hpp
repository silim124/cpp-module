/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 18:09:50 by silim             #+#    #+#             */
/*   Updated: 2022/01/28 18:09:50 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_HPP__
# define __WEAPON_HPP__

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
