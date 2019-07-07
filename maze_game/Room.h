#pragma once

#include "fwd/Direction.h"

#include "MapSite.h"

#include <map>
#include <memory>

namespace maze_game
{
    /// @brief A room in the maze.
    class Room : public MapSite
    {
        public:
            /// @brief Constructor.
            /// @param roomNumber The room number.
            explicit Room(int roomNumber);

            ~Room() override = default;

            /// @brief Enter the room.
            void enter() override;

            /// @brief Set a side of the room.
            /// @param direction The side direction.
            /// @param side What's on the side.
            void setSide(Direction direction, const std::shared_ptr<MapSite>& side);

            /// @brief Get what's on the side of the room.
            /// @param direction The side direction.
            const std::shared_ptr<MapSite>& side(Direction direction) const;

            /// @brief Return the room number.
            int roomNumber() const;

        private:
            std::map<Direction, std::shared_ptr<MapSite>> Sides_;
            int RoomNumber_;

            using base = MapSite;
    };
}
