cmake_minimum_required(VERSION 3.10)

project(DungeonCrawler)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(
    DungeonCrawler

    src/main.cpp
    src/player.cpp
    src/enemy.cpp
    src/map.cpp
    src/game.cpp
    src/render.cpp
)