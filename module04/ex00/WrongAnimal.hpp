#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
	protected:
		std::string _type;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& wrong_animal);
		WrongAnimal&	operator=(WrongAnimal const &wrong_animal);

		void	makeSound() const;
		std::string		getType() const;

		~WrongAnimal();
};

#endif
