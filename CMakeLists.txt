cmake_minimum_required(VERSION 4.4)
set(CMAKE_CXX_COMPILER g++)
project(iris)

set(SOURCES src/main.cpp)
set(BUILD_SHARED_LIBS OFF)

add_subdirectory(vendor)

add_executable(${PROJECT_NAME})
target_sources(${PROJECT_NAME} PUBLIC ${SOURCES})
target_link_libraries(${PROJECT_NAME} PRIVATE vendor)
set_target_properties(${PROJECT_NAME} PROPERTIES
    CXX_STANDARD 23
    CXX_STANDARD_REQUIRED ON
    CXX_SCAN_FOR_MODULES OFF
)