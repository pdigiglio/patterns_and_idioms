#include "AbstractFactory.h"

#include "ConcreteFactory1.h"
#include "ConcreteFactory2.h"

#include <iostream>

namespace creational
{
    namespace abstract_factory
    {
        void exec()
        {
            ConcreteFactory1 concreteFactory1;

            std::cout << concreteFactory1.createProductA()->whoami() << std::endl;
            std::cout << concreteFactory1.createProductB()->whoami() << std::endl;

            ConcreteFactory2 concreteFactory2;

            std::cout << concreteFactory2.createProductA()->whoami() << std::endl;
            std::cout << concreteFactory2.createProductB()->whoami() << std::endl;
        }
    }
}
