#pragma once

namespace maze_game
{
    class MapSite
    {
        public:
            virtual ~MapSite() = default;
            virtual void enter() = 0;
    };
}
