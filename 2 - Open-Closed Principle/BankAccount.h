#pragma once

#include <iostream>
#include "AccountType.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"

class BankAccount
{
    private:
        friend class AccountType;
        float funds;
        std::string number;
        AccountType* type;

    public:
        BankAccount(float _funds, std::string _number, std::string _type)
        {
            if (_type == "savings")
            {
                this->type = new SavingsAccount;
            }
            else if (_type == "checking")
            {
                this->type = new CheckingAccount;
            }
            else
            {
                this->type = nullptr;
            }
        }
        ~BankAccount();
        float getFunds() { return funds; } 
};
