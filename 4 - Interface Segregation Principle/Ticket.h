#pragma once
#include "Document.h"
#include <iostream>

class Ticket : public Document
{
    private:
        int ticketCodenumber = 0;
    public:
        Ticket() = default;
        Ticket(int number) : ticketCodenumber(number) {}
        ~Ticket() = default;
        void print_ticket() override final { std::cout << "Printing ticket..." << std::endl;}
};
