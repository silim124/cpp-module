#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	Animal* dog = new Dog();
	Animal* cat = new Cat();
	std::cout << "-------------------" << std::endl;

	dog->addIdea("잠자기");
	dog->addIdea("먹기");
	dog->addIdea("뛰어놀기");
	dog->addIdea("물기");
	dog->addIdea("달리기");
	dog->addIdea("재롱부리기");
	dog->printIdeas();
	dog->chooseIdea();

	std::cout << "-------------------" << std::endl;
	*cat = *dog;

	cat->addIdea("할퀴기");
 	cat->printIdeas();
 	cat->chooseIdea();

	std::cout << "-------------------" << std::endl;
	delete dog;
	delete cat;

	return 0;
}
