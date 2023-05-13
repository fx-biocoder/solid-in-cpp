#pragma once
#include "AccountType.h"

class CheckingAccount : public AccountType
{
    public:
        CheckingAccount();
        ~CheckingAccount() override;
        void extract(const float number) override 
        { 
            // Implementation
        }
        void deposit(const float number) override
        {
            // Implementation
        }
};
