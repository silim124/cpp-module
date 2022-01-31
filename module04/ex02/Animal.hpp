/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:55:42 by silim             #+#    #+#             */
/*   Updated: 2022/01/31 21:55:42 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal {
	protected:
		std::string _type;

	public:
		Animal();
		Animal(const Animal& animal);
		Animal&	operator=(const Animal &animal);

		std::string				getType() const;
		virtual void			makeSound() const = 0;
		virtual void			printIdeas() = 0;
		virtual void			addIdea(std::string idea) = 0;
		virtual	std::string		chooseIdea() = 0;

		virtual ~Animal();
};

#endif
