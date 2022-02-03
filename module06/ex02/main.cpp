/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:31:04 by silim             #+#    #+#             */
/*   Updated: 2022/02/03 11:28:12 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>

class Base
{
public:
	virtual ~Base() {};
};

class A: public Base
{
public:
	A( void ) {};
	~A( void ) {};
};

class B: public Base
{
public:
	B( void ) {};
	~B( void ) {};
};

class C: public Base
{
public:
	C( void ) {};
	~C( void ) {};
};

Base *generate(void)
{
	srand(time(0)); // 난수 생성을 위해 시간을 초기화한다.
	switch (rand() % 3) // 0 ~ 2 사이의 난수를 발생시킨다.
	{
		case 0:
			return new A(); // A 클래스를 반환한다.
		case 1:
			return new B(); // B 클래스를 반환한다.
		case 2:
			return new C(); // C 클래스를 반환한다.
	}
	return NULL; // 예외상황이면 NULL을 반환한다.
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p)) // 캐스팅한 A 클래스 포인터가 null이 아닌지 확인한다.
		std::cout << "A" << std::endl; // A라면 A를 출력한다.
	else if (dynamic_cast<B*>(p)) // 캐스팅한 B 클래스 포인터가 null이 아닌지 확인한다.
		std::cout << "B" << std::endl; // B라면 B를 출력한다.
	else if (dynamic_cast<C*>(p)) // 캐스팅한 C 클래스 포인터가 null이 아닌지 확인한다.
		std::cout << "C" << std::endl; // C라면 C를 출력한다.
}

void identify(Base &p)
{
	try{
		A tmp;
		tmp = dynamic_cast<A&>(p); // 캐스팅한 A 클래스 레퍼런스를 받아온다.
		std::cout << "A" << std::endl; // A를 출력한다.
		return ;
	}
	catch(const std::exception& e){
	}
	try
	{
		B tmp;
		tmp = dynamic_cast<B&>(p); // 캐스팅한 B 클래스 레퍼런스를 받아온다.
		std::cout << "B" << std::endl; // B를 출력한다.
		return ;
	}
	catch(const std::exception& e){
	}
	try{
		C tmp;
		tmp = dynamic_cast<C &>(p); // 캐스팅한 C 클래스 레퍼런스를 받아온다.
		std::cout << "C" << std::endl; // C라면 C를 출력한다.
		return ;
	}
	catch(const std::exception& e){
	}
}

int main ()
{
	Base *base = NULL; // Base 클래스의 포인터를 생성한다.
	base = generate();
	std::cout << "identify(Base *p):" << std::endl;
	identify(base);
	std::cout << "identify(Base &p)" << std::endl;
	identify(*base);
	delete base;
}
