cmake_minimum_required(VERSION 3.26.3)
project(cxx-test)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB SOURCE_FILES "lib/*.hpp" "src/*.cpp")

include_directories(lib)

#set(SOURCE_FILES "src/*.cpp")

set(CMAKE_CXX_COMPILER=/usr/bin/clang++)

add_executable(cxx-test ${SOURCE_FILES})
set_target_properties(cxx-test PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin
)
