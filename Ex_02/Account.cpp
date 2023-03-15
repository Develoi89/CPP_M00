#include <iostream>
#include "Account.hpp"


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
    _amount =+ deposit;
    _totalAmount =+ deposit;
}