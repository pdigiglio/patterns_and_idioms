#pragma once

#include "MapSite.h"

namespace maze_game
{
    class Wall : public MapSite
    {
        public:
            ~Wall() override = default;

            void enter() override;
    };
}
