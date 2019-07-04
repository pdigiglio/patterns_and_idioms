#pragma once

#include "ProductA.h"

namespace creational
{
    namespace abstract_factory
    {
        class ConcreteProductA1 : public ProductA
        {
            public:
                std::string whoami() override
                {
                    return "ConcreteProductA1";
                }

                ~ConcreteProductA1() override = default;
        };
    }
}
