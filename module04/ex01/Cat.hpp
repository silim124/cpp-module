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

		virtual void				makeSound() const;
		virtual void				printIdeas();
		virtual void				addIdea(std::string idea);
		virtual std::string			chooseIdea();

		virtual ~Cat();
};

#endif
