cmake_minimum_required(VERSION 3.8)
project(stockMarketAPI)

set(CMAKE_CXX_STANDARD 14)

add_executable(stockMarketAPI-main
        main.cpp
        marketAPI.h marketAPI.cpp
        Investment.cpp Investment.h
        Stock.cpp Stock.h
        Bond.cpp Bond.h)

add_executable(stockMarketAPI-testing
        marketAPITesting.cpp
        marketAPI.h
        marketAPI.cpp
        Investment.cpp Investment.h
        Stock.cpp Stock.h
        Bond.cpp Bond.h)
