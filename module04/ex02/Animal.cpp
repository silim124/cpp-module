#include "Animal.hpp"

Animal::Animal(){
	_type = "(null)";
	std::cout << "Animal 생성자를 호출하였습니다." << std::endl;
}

Animal::Animal(const Animal& animal){
	_type = animal._type;
	std::cout << "Animal 복사 생성자를 호출하였습니다." << std::endl;
}

Animal &	Animal::operator=(const Animal &animal){
	_type = animal._type;
	std::cout << "Animal 대입연산자 (" << _type << ")을 호출하였습니다." << std::endl;
	return (*this);
}

Animal::~Animal(){
	std::cout << "Animal 소멸자를 호출하였습니다." << std::endl;
}
