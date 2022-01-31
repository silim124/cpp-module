/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bird.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 21:55:45 by silim             #+#    #+#             */
/*   Updated: 2022/01/31 21:55:46 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bird.hpp"

Bird::Bird()
{
	_type = "Bird";
	std::cout << "새 생성자를 호출하였습니다." << std::endl;
}

Bird::Bird(const Bird& bird)
{
	_type = bird._type;
	std::cout << "새 복사 생성자를 호출하였습니다." << std::endl;
}

Bird&	Bird::operator=(const Bird& bird){
	_type = bird._type;
	std::cout << "Bird 대입연산자 (" << _type << ")을 호출하였습니다." << std::endl;
	return (*this);
}

void	Bird::makeSound() const{
	std::cout << "짹짹" << std::endl;
}

Bird::~Bird(){
	std::cout << "새 소멸자를 호출하였습니다." << std::endl;
}

void	Bird::printIdeas(){
	return ;
}

void	Bird::addIdea(std::string idea){
	idea = "";
	return ;
}

std::string	Bird::chooseIdea(){
	return "";
}
