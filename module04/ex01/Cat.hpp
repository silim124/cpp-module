#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *_brain;

	public:
		Cat();
		Cat(const Cat& cat);
		Cat& operator=(const Cat& cat);
		virtual Animal&	operator=(const Animal &animal);

		void			makeSound() const;
		void			printIdeas();
		void			addIdea(std::string idea);
		std::string		chooseIdea();
		virtual Brain	*getBrain() const;

		~Cat();
};

#endif
