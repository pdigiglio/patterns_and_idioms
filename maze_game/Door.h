#pragma once

#include "fwd/Room.h"

#include "MapSite.h"

#include <memory>

namespace maze_game
{
    class Door : public MapSite
    {
        public:
            explicit Door(const std::shared_ptr<Room>& from = nullptr, const std::shared_ptr<Room>& to = nullptr);
            ~Door() override = default;

            void enter() override;

        private:
            std::shared_ptr<Room> From_;
            std::shared_ptr<Room> To_;
            bool IsOpen_;

            using base = MapSite;
    };
}
