/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:54:33 by silim             #+#    #+#             */
/*   Updated: 2022/01/31 21:54:36 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << "멍멍이 생성자를 호출하였습니다." << std::endl;
}

Dog::Dog(const Dog& dog)
{
	*this = dog;
	std::cout << "멍멍이 복사 생성자를 호출하였습니다." << std::endl;
}

Dog&	Dog::operator=(const Dog& dog)
{
	_type = dog._type;
	std::cout << "Dog 대입연산자 (" << _type << ")을 호출하였습니다." << std::endl;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "왈왈" << std::endl;
}

Dog::~Dog(){
	std::cout << "멍멍이 소멸자를 호출하였습니다." << std::endl;
}
