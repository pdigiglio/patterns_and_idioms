#include "Maze.h"

#include "Room.h"

#include <exception>
#include <map>
#include <memory>

namespace maze_game
{
    Maze::Maze()
        :
            Rooms_(),
            NoRoom_(nullptr)
    {}

    void Maze::addRoom(const std::shared_ptr<Room>& room)
    {
        auto roomNumber = room->roomNumber();
        this->Rooms_[roomNumber] = room;
    }

    const std::shared_ptr<Room>& Maze::room(int roomNumber) const
    {
        try
        {
            return this->Rooms_.at(roomNumber);
        } catch(const std::out_of_range& ex)
        {
            return this->NoRoom_;
        }
    }

}
