cmake_minimum_required(VERSION 3.12)

project ("DesignPatterns")

file(GLOB SOURCE_FILES "*.cpp" "**/*.cpp")

set(GLOB HEADERS "*.hpp" "**/*.hpp")

add_executable(DesignPatterns ${SOURCE_FILES} ${HEADERS})

set_property(TARGET DesignPatterns PROPERTY CXX_STANDARD 20)

target_include_directories(DesignPatterns PRIVATE include)