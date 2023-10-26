cmake_minimum_required(VERSION 3.22.1)
project(bhh)

set(CMAKE_CXX_STANDARD 17)
file(GLOB bhh
        "inc/*.h"
        "src/*.cpp"
)
include_directories("inc/")
add_executable(bhh ${bhh})
