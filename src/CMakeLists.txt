cmake_minimum_required(VERSION 3.9)
project(BlockChain)

set(CMAKE_CXX_STANDARD 11)

add_executable(BlockChain main.cpp Block.h Block.cpp Util.h)