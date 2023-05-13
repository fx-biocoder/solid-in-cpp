#pragma once

class IPrint
{
    public:
        IPrint() = default;
        virtual ~IPrint() = default;
        virtual void print_ticket() = 0;
};
