cmake_minimum_required(VERSION 3.17)
project(Game)

set(CMAKE_CXX_STANDARD 14)
find_package(SFML 2.5 COMPONENTS system window graphics)
add_executable(Game main.cpp Animation.cpp Player.cpp Player.h Map.cpp Map.h )
target_link_libraries(Game sfml-system sfml-window sfml-graphics sfml-audio)