#pragma once

#include "fwd/ProductA.h"
#include "fwd/ProductB.h"

#include <memory>

namespace creational
{
    namespace abstract_factory
    {
        class AbstractFactory
        {
            public:
                virtual std::unique_ptr<ProductA> createProductA() = 0;
                virtual std::unique_ptr<ProductB> createProductB() = 0;
        };
    }
}
