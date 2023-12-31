# minimum version of CMake required
cmake_minimum_required(VERSION 3.25)


#define constants
set(PROJECT_NAME logi-sim)
# use configue_depends to make sure that cmake reruns when a new file is added
file(GLOB_RECURSE SOURCE_FILES CONFIGURE_DEPENDS "${CMAKE_SOURCE_DIR}/source/*.cpp" "${CMAKE_SOURCE_DIR}/source/*.hpp")

# project name
project(${PROJECT_NAME})

# c++ version
set(CMAKE_CXX_STANDARD 20)

find_package(SFML 2.5.1 COMPONENTS system window graphics audio network)
find_package(crossguid REQUIRED)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

# link external libaries
target_link_libraries(
        ${PROJECT_NAME}
        sfml-system
        sfml-window
        sfml-graphics
        sfml-audio
        sfml-network
        crossguid
)