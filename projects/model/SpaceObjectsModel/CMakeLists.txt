cmake_minimum_required(VERSION 3.5)

project(SpaceObjectsModel LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(
    "./"
    "../"
)

set(SOURCES
    TAbstractIntegrator.cpp
    TAbstractIntegrator.h
    TDynamicModel.cpp
    TDynamicModel.h
    TSpaceCraft.cpp
    TSpaceCraft.h
    TVector.cpp
    TVector.h
    TEuler.cpp
    TEuler.h
    TRungeKutta.cpp
    TRungeKutta.h
)

add_executable(SpaceObjectsModel main.cpp ${SOURCES})
