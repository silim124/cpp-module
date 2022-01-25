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
		virtual Animal&	operator=(const Animal &animal);

		std::string				getType() const;
		virtual void			makeSound();
		virtual void			printIdeas() = 0;
		virtual void			addIdea(std::string idea) = 0;
		virtual	std::string		chooseIdea() = 0;
		virtual Brain			*getBrain() const  = 0;

		virtual ~Animal();
};

#endif
