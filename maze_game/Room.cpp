#include "Room.h"

#include "Direction.h"

#include <iostream> 
#include <map> 
#include <memory> 

namespace maze_game
{
    Room::Room(int roomNumber)
        :
            base(),
            Sides_({
                    { Direction::North, nullptr },
                    { Direction::South, nullptr },
                    { Direction::East,  nullptr },
                    { Direction::West,  nullptr }
                }),
            RoomNumber_(roomNumber)
    { }

    void Room::enter()
    {
        std::cout << "Entering room " << this->roomNumber() << std::endl;
    }

    void Room::setSide(Direction direction, const std::shared_ptr<MapSite>& side)
    {
        this->Sides_[direction] = side;
    }

    const std::shared_ptr<MapSite>& Room::side(Direction direction) const
    {
        return this->Sides_.at(direction);
    }

    int Room::roomNumber() const
    {
        return this->RoomNumber_;
    }
}
