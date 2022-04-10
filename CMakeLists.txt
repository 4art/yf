cmake_minimum_required(VERSION 3.6.3)
project(yahoo-finance CXX)

set(CMAKE_CXX_STANDARD 14)

# Library source files
file(GLOB LIB_SOURCES src/*.cpp)
file(GLOB LIB_HEADERS src/*.hpp )
add_library(yahoo-finance ${LIB_SOURCES} ${LIB_HEADERS} src/helper.cpp src/helper.h)

# Build documentation
add_subdirectory(doc)

# Create example executable
add_executable(example src/example.cpp src/helper.cpp src/helper.h)
target_link_libraries(example yahoo-finance curl)

# Build tests and enable CTest
#enable_testing()
#add_subdirectory(test)
