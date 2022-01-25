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
