#ifndef BIRD_HPP
# define BIRD_HPP

#include "Animal.hpp"

class Bird : public Animal
{
	private:

	public:
		Bird();
		Bird(const Bird& bird);
		Bird& operator=(const Bird& bird);

		virtual void			makeSound() const;
		virtual void			printIdeas();
		virtual void			addIdea(std::string idea);
		virtual std::string		chooseIdea();

		virtual ~Bird();
};

#endif
