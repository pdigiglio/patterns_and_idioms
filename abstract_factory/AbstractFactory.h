#pragma once

#include <memory>

namespace creational
{
    namespace abstract_factory
    {
        class ProductA;
        class ProductB;

        class AbstractFactory
        {
            public:
                virtual std::unique_ptr<ProductA> createProductA() = 0;
                virtual std::unique_ptr<ProductB> createProductB() = 0;
                virtual ~AbstractFactory() = default;
        };

        void exec();
    }
}
