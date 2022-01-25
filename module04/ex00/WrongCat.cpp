#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "야옹이 생성자를 호출하였습니다." << std::endl;
}

WrongCat::WrongCat(const WrongCat& wrong_cat)
{
	_type = wrong_cat._type;
	std::cout << "야옹이 복사 생성자를 호출하였습니다." << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& wrong_cat){
	_type = wrong_cat._type;
	std::cout << "WrongCat 대입연산자 (" << _type << ")을 호출하였습니다." << std::endl;
	return (*this);
}

void	WrongCat::makeSound() const{
	std::cout << "미야야야옹" << std::endl;
}

WrongCat::~WrongCat(){
	std::cout << "야옹이 소멸자를 호출하였습니다." << std::endl;
}
