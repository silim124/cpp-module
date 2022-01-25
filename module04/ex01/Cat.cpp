#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	_brain = new Brain;
	std::cout << "야옹이 생성자를 호출하였습니다." << std::endl;
}

Cat::Cat(const Cat& cat)
{
	_type = cat._type;
	_brain = new Brain;
	std::cout << "야옹이 복사 생성자를 호출하였습니다." << std::endl;
}

Cat&	Cat::operator=(const Cat& cat){
	_type = cat._type;
	std::cout << "Cat 대입연산자 (" << _type << ")을 호출하였습니다." << std::endl;
	return (*this);
}

Animal &	Cat::operator=(const Animal &cat){
	*(_brain) = *(cat.getBrain());
	std::cout << "Cat 대입연산자 (" << _type << ")을 호출하였습니다." << std::endl;
	return (*this);
}

void	Cat::makeSound() const{
	std::cout << "야옹" << std::endl;
}

Brain	*Cat::getBrain() const
{
	return (this->_brain);
}

void	Cat::printIdeas(){
	std::cout << "-------------------" << std::endl;
	std::cout << _type << "의 ";
	_brain->printIdeas();
	std::cout << "-------------------" << std::endl;
}

void	Cat::addIdea(std::string idea){
	_brain->addIdea(idea);
}

std::string	Cat::chooseIdea(){
	return _brain->chooseIdea();
}

Cat::~Cat(){
	delete _brain;
	std::cout << "야옹이 소멸자를 호출하였습니다." << std::endl;
}
