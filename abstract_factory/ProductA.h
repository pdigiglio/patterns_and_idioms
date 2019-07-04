#pragma once

#include <string>

namespace creational
{
    namespace abstract_factory
    {
        class ProductA
        {
            public:
                virtual std::string whoami() = 0;
                virtual ~ProductA() = default;
        };
    }
}
