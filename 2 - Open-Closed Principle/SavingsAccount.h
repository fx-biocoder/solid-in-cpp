#pragma once
#include "AccountType.h"

class SavingsAccount : public AccountType
{
    public:
        SavingsAccount();
        ~SavingsAccount() override;
        void extract(const float number) override 
        { 
            // Implementation
        }
        void deposit(const float number) override
        {
            // Implementation
        }
};
