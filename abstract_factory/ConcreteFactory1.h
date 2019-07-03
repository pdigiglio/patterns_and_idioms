#pragma once

#include "ConcreteProductA1.h"
#include "ConcreteProductB1.h"

#include <memory>

namespace creational
{
    namespace abstract_factory
    {
        class ConcreteFactory1 : public AbstractFactory
        {
            public:
                std::unique_ptr<ProductA> createProductA() override
                {
                    return std::make_unique<ConcreteProductA1>();
                }

                std::unique_ptr<ProductB> createProductB() override
                {
                    return std::make_unique<ConcreteProductB1>();
                }
        };
    }
}
