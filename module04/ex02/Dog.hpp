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
