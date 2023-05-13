#pragma once

class IView
{
    public:
        IView() = default;
        virtual ~IView() = default;
        virtual void display() = 0;
};
