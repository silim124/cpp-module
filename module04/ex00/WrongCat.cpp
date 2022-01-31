/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:54:52 by silim             #+#    #+#             */
/*   Updated: 2022/01/31 23:51:24 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "잘못된 야옹이 생성자를 호출하였습니다." << std::endl;
}

WrongCat::WrongCat(const WrongCat& wrong_cat)
{
	_type = wrong_cat._type;
	std::cout << "잘못된 야옹이 복사 생성자를 호출하였습니다." << std::endl;
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
