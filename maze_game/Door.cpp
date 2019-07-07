#include "Door.h"

#include <iostream>
#include <string>

namespace maze_game
{
    Door::Door(const std::shared_ptr<Room>& from, const std::shared_ptr<Room>& to)
        :
            base(),
            From_(from),
            To_(to),
            IsOpen_(false)
            
    { }

    void Door::enter()
    {
        std::string msg = (true == this->IsOpen_) ? "Ok, door is open" : "Auch! Door is closed";
        std::cout << "Entering Door: " << msg << std::endl;
    }
}
