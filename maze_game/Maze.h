#pragma once

#include "fwd/Room.h"

#include <map>
#include <memory>

namespace maze_game
{
    class Maze
    {
        public:
            explicit Maze();
            virtual ~Maze() = default;

            /// @brief Add a room to the maze.
            void addRoom(const std::shared_ptr<Room>& room);

            /// @brief Find a room by its room number.
            const std::shared_ptr<Room>& room(int roomNumber) const;

        private:
            std::map<int, std::shared_ptr<Room>> Rooms_;
            
            /// @brief A room intitialized to \c nullptr to be returned when
            ///        the user requests for a non-existing room number.
            const std::shared_ptr<Room> NoRoom_;
    };
}
