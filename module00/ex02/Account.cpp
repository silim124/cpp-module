/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: silim <silim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:23:35 by silim             #+#    #+#             */
/*   Updated: 2022/01/25 23:42:06 by silim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <iostream>
#include <iomanip>
#include "Account.hpp"

Account::Account( int initial_deposit ){
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
};

Account::~Account( void ){
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
};

void	Account::makeDeposit( int deposit ){
	int p_amount = _amount;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";deposit:" << deposit <<";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
};

bool	Account::makeWithdrawal( int withdrawal ){
	int p_amount = _amount;
	_amount -= withdrawal;
	if (checkAmount() == 0){
		_amount += withdrawal;
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:"<< p_amount << ";withdrawal:refused" << std::endl;
		return (0);
	}
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:"<< p_amount << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (1);
};

int		Account::checkAmount( void ) const{
	return (_amount >= 0)? 1 : 0;
};

void	Account::displayStatus( void ) const{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawls:" << _nbWithdrawals << std::endl;
};

void	Account::_displayTimestamp( void ){
	time_t current_time = time(NULL);
	struct tm *local_time = localtime(&current_time);
	std::cout << std::put_time(local_time, "[%y%m%d_%OH%OM%OS] ");
};

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ){
	return _nbAccounts;
};

int	Account::getTotalAmount( void ){
	return _totalAmount;
};

int	Account::getNbDeposits( void ){
	return _totalNbDeposits;
};

int	Account::getNbWithdrawals( void ){
	return _totalNbWithdrawals;
};

void	Account::	displayAccountsInfos( void ){
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
};
