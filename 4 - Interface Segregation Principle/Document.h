#pragma once
#include "IPrint.h"
#include <ctime>

class Document : public IPrint
{
    private:
        int number = 0;
    public:
        Document() = default;
        ~Document() = default;
        void print_ticket() = 0;
};
