#include "Account.hpp"
#include <iostream>
#include<ctime>

int Account::_nbAccounts;
int Account::_totalAmount;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;

void	Account::_displayTimestamp(void)
{
	time_t rawtime;
	struct tm * timeinfo;
	time (&rawtime);
	timeinfo = localtime(&rawtime);
	std::cout << "[" << timeinfo->tm_year + 1900 << timeinfo->tm_mon + 1<< timeinfo->tm_mday;
	std::cout << "_" << timeinfo->tm_hour << timeinfo->tm_min << timeinfo->tm_sec << "]" << " ";
}

Account::Account(void)
{
	return;
}

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	static int index;
	this->_accountIndex = index;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
	_totalAmount += initial_deposit;
	index++;
	_nbAccounts = index;
	return;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
	return;
}

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << ";" << std::endl;

}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << ";" << std::endl;
}

void Account::makeDeposit(int deposit)
{

//	index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_amount = this->_amount + deposit;
	std::cout << "amount:" << this->_amount << ";";
	_nbDeposits += 1;
	std::cout << "nb_deposits:" << this->_nbDeposits << ";" << std::endl;
	_totalAmount += deposit;
}

bool Account::makeWithdrawal(int withdrawal)
{
//	index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	if (this->_amount - withdrawal >= 0)
	{
		std::cout << "withdrawal:" << withdrawal << ";";
		this->_amount = this->_amount - withdrawal;
		std::cout << "amount:" << this->_amount << ";";
		_nbWithdrawals += 1;
		std::cout << "nb_deposits:" << this->_nbDeposits << ";" << std::endl;
		_totalAmount -= withdrawal;
		return (0);
	}
	else
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (1);
	}
}