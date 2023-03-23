#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

void    Account::_displayTimestamp(void)
{
    time_t      t_ptr;
    struct tm   *t;

    std::time(&t_ptr);
    t = localtime(&t_ptr);
    std::cout << "[";
    std::cout << t->tm_year + 1900;
    std::cout << std::setw(2) << std::setfill('0') << t->tm_mon + 1;
    std::cout << std::setw(2) << std::setfill('0') << t->tm_mday << "_";
    std::cout << std::setw(2) << std::setfill('0') << t->tm_hour;
    std::cout << std::setw(2) << std::setfill('0') << t->tm_min;
    std::cout << std::setw(2) << std::setfill('0') << t->tm_sec;
    std::cout <<"] ";
}

Account::Account(int initial_deposit)
{
    _accountIndex = 0 + _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _nbAccounts++;
    _totalAmount =+ initial_deposit;
}

void Account::makeDeposit(int deposit)
{
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    std::cout << "deposit:" << deposit << ";";
    _amount =+ deposit;
    std::cout << "amount:" << _amount << ";";
    _totalAmount =+ deposit;
    _nbDeposits++;
    std::cout << "nb_deposits:" << _nbDeposits << std::endl;
    _totalNbDeposits++;
    return;
}

bool Account::makeWithdrawal(int withdrawal)
{
    if (withdrawal >= _amount)
    {
        std::cout << "index:" << _accountIndex << ";";
        std::cout << "p_amount:" << _amount << ";";
        std::cout << "withdrawal:" << withdrawal << ";";
        _amount =- withdrawal;
        std::cout << "amount:" << _amount << ";";
        _totalAmount =- withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        std::cout << "nb_withdrawals:" << _nbWithdrawals << std::endl;
        return true;
    }
    else
    {
        std::cout << "index:" << _accountIndex << ";";
        std::cout << "p_amount:" << _amount << ";";
        std::cout << "withdrawal:refused" << std::endl;
        return false;
    }
}

int Account::getNbAccounts(void)
{
    std::cout << "accounts:" << _nbAccounts << ";";
    return _nbAccounts;
}

int Account::getTotalAmount(void)
{
    std::cout << "total:" << _totalAmount << ";";
    return _totalAmount;
}

int Account::getNbDeposits(void)
{
    std::cout << "deposits:" << _totalNbDeposits << ";";
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
    std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void)
{
    getNbAccounts();
    getTotalAmount();
    getNbDeposits();
    getNbWithdrawals();
    return;
}
