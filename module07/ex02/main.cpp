/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:28:30 by silim             #+#    #+#             */
/*   Updated: 2022/02/03 12:50:57 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

int main()
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL]; // numbers 배열 복사
	srand(time(NULL)); // 난수 초기화
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand(); // 난수 생성
		numbers[i] = value; // 배열에 저장
		mirror[i] = value; // 복사 배열에 저장
	}
	//SCOPE
	{
		Array<int> tmp = numbers; // numbers 배열 대입 연산
		Array<int> test(tmp); // numbers 배열 복사 생성
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0; // 인덱스 초과 오류
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0; // 인덱스 초과 오류
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand(); // 난수 생성
	}
	delete [] mirror;

	std::cout << std::endl;
	std::cout << "---=======예외 테스트=======---" << std::endl;
	try {
		Array<char> a(5);
		a[0] = 'a';
		a[1] = 'b';
		a[5] = 'c';
	} catch(std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	Array<char> a(5);
	a[0] = 'a';
	a[1] = 'b';

	Array<char> b;
	b = a;

	std::cout << "---=======대입연산자 테스트=======---" << std::endl;

	std::cout << b[0] << std::endl;

	std::cout << std::endl;
	std::cout << "---=======복사생성자 테스트=======---" << std::endl;

	Array<char> c(a);

	std::cout << c[0] << '\n' << std::endl;

	return 0;
}
