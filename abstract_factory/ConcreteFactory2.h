#pragma once

#include "ConcreteProductA2.h"
#include "ConcreteProductB2.h"

#include <memory>

namespace creational
{
    namespace abstract_factory
    {
        class ConcreteFactory2 : public AbstractFactory
        {
            public:
                std::unique_ptr<ProductA> ConcreteFactory2::createProductA() override
                {
                    return std::make_unique<ConcreteProductA2>();
                }

                std::unique_ptr<ProductB> ConcreteFactory2::createProductB() override
                {
                    return std::make_unique<ConcreteProductB2>();
                }
        };
    }
}
