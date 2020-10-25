cmake_minimum_required(VERSION 3.17)
project(Riemann_Solver_main)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Riemann_Solver_main
        PerfectStateGas.cpp
        PerfectStateGas.h
        Reflection_function.cpp
        Reflection_function.h
        Shock_function.cpp
        Shock_function.h
        solver.cpp
        solver.h
        tests.cpp)
