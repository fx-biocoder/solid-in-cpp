#pragma once

class IEmail
{
    public:
        IEmail() = default;
        virtual ~IEmail() = default;
        virtual void sendTicketByEmail() = 0;
};
