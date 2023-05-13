#pragma once
#include "Brand.h"
#include <iostream>

class Model
{
    private:
        friend class Brand;
        std::string modelName;
    public:
        Model(std::string brandName)
        {
            Brand* brand = new Brand(brandName);
            modelName = brand->brandName;
        }
        ~Model();
};
