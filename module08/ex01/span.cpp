/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 18:02:08 by silim             #+#    #+#             */
/*   Updated: 2022/02/03 18:06:56 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int N): _N(N) {}

Span::~Span() {}

Span::Span(const Span& origin): _N(origin._N), _sp(origin._sp) {}

Span & Span::operator=(const Span& origin)
{
	if (this == &origin)
		return (*this);
	this->_N = origin._N;
	this->_sp = origin._sp;
	return (*this);
}

void	Span::addNumber(int n) // 원소 추가
{
	if (_sp.size() < _N)
		_sp.push_back(n);
	else
		throw Span::SpIsFull();
}

int	Span::shortestSpan() // 최소값
{
	if(_sp.size() <= 1)
		throw Span::SpIsTooSmall();

	std::sort(_sp.begin(), _sp.end());
	int shortest = _sp[1] - _sp[0];
	for (size_t i = 1; i < _sp.size() - 1; i++)
		if ((_sp[i + 1] - _sp[i]) < shortest)
			shortest = _sp[i + 1] - _sp[i];
	return (shortest);
}

int	Span::longestSpan() // 최대값
{
	if(this->_sp.size() <= 1)
		throw Span::SpIsTooSmall();

	int min_sp = *std::min_element(_sp.begin(), _sp.end());
	int max_sp = *std::max_element(_sp.begin(), _sp.end());
	return (max_sp - min_sp);
}

void	Span::RandomInit() // 임의의 수로 초기화
{
	srand(time(NULL));
	for (unsigned int i = 0; i < _N; i++)
		 _sp.push_back(rand());
}
