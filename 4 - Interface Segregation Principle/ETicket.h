#pragma once
#include "Document.h"
#include "IEmail.h"

class ETicket : public Document, public IEmail
{
    private:
        int eTicketCodenumber = 0;
    public:
        ETicket() = default;
        ETicket(int number) : eTicketCodenumber(number) {}
        ~ETicket() = default;
        void print_ticket() override final;
        void sendTicketByEmail() override final;
};
