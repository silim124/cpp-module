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
		virtual Animal&	operator=(const Animal &animal);

		void			makeSound() const;
		void			printIdeas();
		void			addIdea(std::string idea);
		std::string		chooseIdea();
		virtual Brain	*getBrain() const;

		~Dog();
};

#endif
