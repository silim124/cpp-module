/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:54:25 by silim             #+#    #+#             */
/*   Updated: 2022/02/01 00:48:51 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
	protected:
		std::string _type;

	public:
		Animal();
		Animal(const Animal& animal);
		Animal&	operator=(Animal const &animal);

		virtual void	makeSound() const;
		std::string		getType() const;

		virtual ~Animal();
};

#endif
