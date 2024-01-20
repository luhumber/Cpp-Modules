/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 15:50:01 by lucas             #+#    #+#             */
/*   Updated: 2023/07/25 18:04:50 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(void)
{
    return ;
}

Account::Account( int initial_deposit ) 
{
    this->_accountIndex = _nbAccounts;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    Account::_nbAccounts++;
    Account::_totalAmount = _amount;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_totalAmount << ";";
    std::cout << "created" << std::endl;
    return ;    
}

Account::~Account (void)
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _totalAmount << ";";
    std::cout << "closed" << std::endl;
    return ;
}

void	Account::makeDeposit(int deposit)
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_nbAccounts << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    this->_amount += deposit;
    this->_nbDeposits++;
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits++;
    std::cout << "deposit:" << deposit << ";";
    std::cout << "amount:" << this->_amount <<  ";";
    std::cout << "nb_deposits" << this->_nbDeposits << std::endl;
}

bool    Account::makeWithdrawal(int withdrawal)
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_nbAccounts << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    this->_amount -= withdrawal;
    if (Account::checkAmount())
    {
        this->_amount += withdrawal;
        std::cout << "withdrawal:refused" << std::endl;
        return (false);
    }
    Account::_totalAmount -= withdrawal;
    this->_nbWithdrawals++;
    Account::_totalNbWithdrawals++;
    std::cout << "withdrawal:" << withdrawal << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return (true);
}

int     Account::checkAmount(void) const
{
    if (this->_amount < 0)
        return (1);
    return (0);
}

void	Account::displayStatus(void) const
{
    Account::_displayTimestamp();
    std::cout << "account:" << _nbAccounts << ";";
    std::cout << "total:" << _totalAmount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
    time_t      p_time;
    struct tm   *t;

    std::time(&p_time);
    t = localtime(&p_time);
    std::cout << "[";
    std::cout << t->tm_year + 1900;
    std::cout << std::setw(2) << std::setfill('0') << t->tm_mon + 1;
    std::cout << std::setw(2) << std::setfill('0') << t->tm_mday << "_";
    std::cout << std::setw(2) << std::setfill('0') << t->tm_hour;
    std::cout << std::setw(2) << std::setfill('0') << t->tm_min;
    std::cout << std::setw(2) << std::setfill('0') << t->tm_sec;
    std::cout << "] ";
}

int	Account::getNbAccounts(void)
{
    return (Account::_nbAccounts);
}
int	Account::getTotalAmount(void)
{
    return (Account::_totalAmount);
}
int	Account::getNbDeposits(void)
{
    return (Account::_totalNbDeposits);
}
int	Account::getNbWithdrawals(void)
{
    return (Account::_totalNbWithdrawals);
}
void	Account::displayAccountsInfos(void)
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts() << ";";
    std::cout << "total:" << Account::getTotalAmount() << ";";
    std::cout << "deposits:" << Account::getNbDeposits() << ";";
    std::cout << "withdrawals:" << Account::getNbWithdrawals() << ";" << std::endl;
}