cmake_minimum_required(VERSION 3.5)

project(SpaceObjectsModel LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(
    "./"
    "../"
    "../../../modules/"
)

set(SOURCES
    ../../../modules/TAbstractIntegrator.cpp
    ../../../modules/TAbstractIntegrator.h
    ../../../modules/TDynamicModel.cpp
    ../../../modules/TDynamicModel.h
    ../../../modules/TSpaceCraft.cpp
    ../../../modules/TSpaceCraft.h
    ../../../modules/TVector.cpp
    ../../../modules/TVector.h
    ../../../modules/TEuler.cpp
    ../../../modules/TEuler.h
    ../../../modules/TRungeKutta.cpp
    ../../../modules/TRungeKutta.h
)

add_executable(SpaceObjectsModel main.cpp ${SOURCES})
