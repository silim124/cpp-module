/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:56:10 by silim             #+#    #+#             */
/*   Updated: 2022/01/31 21:56:10 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *_brain;

	public:
		Dog();
		Dog(const Dog& dog);
		Dog& operator=(const Dog& dog);
		Animal&	operator=(const Animal &animal);

		virtual void					makeSound() const;
		virtual void					printIdeas();
		virtual void					addIdea(std::string idea);
		virtual std::string				chooseIdea();

		virtual ~Dog();
};

#endif
