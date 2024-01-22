cmake_minimum_required(VERSION 3.28)
project(litchi)
set(CMAKE_CXX_STANDARD 20)
# set(SOURCE_FILES main.cpp)
file(GLOB SOURCE_FILES
	"*.cc"
	"utils/*.cc"
)
add_executable(litchi ${SOURCE_FILES})
target_include_directories(litchi PRIVATE include utils)