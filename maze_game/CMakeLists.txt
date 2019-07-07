set(MAZE_GAME_SOURCES
    Door.cpp
    Maze.cpp
    Room.cpp
    Wall.cpp)

add_library(maze_game SHARED ${MAZE_GAME_SOURCES})

target_include_directories(maze_game
    PUBLIC ${PATTERNS_AND_IDIOMS_SOURCE_DIR}/maze_game)

