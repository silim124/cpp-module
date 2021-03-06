/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:30:59 by silim             #+#    #+#             */
/*   Updated: 2022/02/02 20:14:25 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t	serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr); // 주소를 정수형으로 변환한다.
}

Data	*deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw); // 정수형 주소를 주소로 변환한다.
}

void	print_data(Data *tmp, std::string str)
{
	std::cout << str << std::endl;
	std::cout << "\t주소: " << tmp << std::endl;
	std::cout << "\t이름: " << tmp->name << std::endl;
	std::cout << "\t등급: " << tmp->grade << std::endl;
}

int main ()
{
	Data* data1 = new Data(); // Data 구조체를 포인터로 생성한다.
	Data* data2; // Data 구조체를 포인터로 생성한다.

	data1->grade = 21; // grade를 21로 설정한다.
	data1->name = "테스트"; // name을 "test"로 설정한다.
	print_data(data1, "원본 데이터:"); // 원본 데이터를 출력한다.

	uintptr_t raw = serialize(data1); // 원본 데이터를 직렬화한다.
	std::cout << "직렬화 데이터: " << raw << std::endl; // 직렬화한 데이터를 출력한다.

	data2 = deserialize(raw); // 원본 데이터를 역직렬화한다.
	print_data(data2, "역직렬화 데이터:"); // 역직렬화한 데이터를 출력한다.

	delete data1;
	return 0;
}
