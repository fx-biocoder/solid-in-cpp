#pragma once

#include "BankAccount.h"

class AccountType
{
    public:
        friend class BankAccount;
        AccountType();
        virtual ~AccountType();
        virtual void extract(const float number); 
        virtual void deposit(const float number);
};
