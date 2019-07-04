#pragma once

#include "ProductA.h"

namespace creational
{
    namespace abstract_factory
    {
        class ConcreteProductA2 : public ProductA
        {
            public:
                std::string whoami() override
                {
                    return "ConcreteProductA2";
                }

                ~ConcreteProductA2() override = default;
        };
    }
}
