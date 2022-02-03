/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 18:02:21 by silim             #+#    #+#             */
/*   Updated: 2022/02/03 18:02:22 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>
# include <algorithm>

template< typename T >
class MutantStack: public std::stack<T>
{
public:
	//container_type는 스택의 기초 클래스인 deque. deque의 반복자 반환 함수를 호출하도록 함수 만들기
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	MutantStack(): std::stack<T>() // 생성자
	{
	};

	virtual ~MutantStack() // 가상 소멸자
	{
	};

	MutantStack(const MutantStack& origin): std::stack<T>(origin) // 복사 생성자
	{
	};

	MutantStack &operator=(const MutantStack &origin) // 대입 연산자
	{
		std::stack<T>::operator=(origin);
		return *this;
	};

	iterator begin() // 인덱스 시작
	{
		return c.begin();
	};

	iterator end() // 인덱스 끝
	{
		return c.end();
	};

	const_iterator begin() const // 인덱스 시작
	{
		return c.begin();
	};

	const_iterator end() const // 인덱스 끝
	{
		return c.end();
	};

	reverse_iterator rbegin() // 역 인덱스 시작
	{
		return c.rbegin();
	};

	reverse_iterator rend() // 역 인덱스 끝
	{
		return c.rend();
	};

	const_reverse_iterator rbegin() const //
	{
		return std::stack<T>::c.rbegin();
	};

	const_reverse_iterator rend() const
	{
		return std::stack<T>::c.rend();
	};
};

#endif
