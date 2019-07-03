#pragma once

#include <string>

namespace creational
{
    namespace abstract_factory
    {
        class ProductB
        {
            public:
                virtual std::string whoami() = 0;
        };
    }
}
