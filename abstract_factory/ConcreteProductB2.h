#pragma once

#include "ProductB.h"

namespace creational
{
    namespace abstract_factory
    {
        class ConcreteProductB2 : public ProductB
        {
            public:
                std::string whoami() override
                {
                    return "ConcreteProductB2";
                }
        };
    }
}
