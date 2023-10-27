cmake_minimum_required(VERSION 3.22.1)
project(bhh)


include(FetchContent)

FetchContent_Declare(ftxui
        GIT_REPOSITORY https://github.com/ArthurSonzogni/ftxui
        GIT_TAG v5.0.0
)

FetchContent_GetProperties(ftxui)
if(NOT ftxui_POPULATED)
    FetchContent_Populate(ftxui)
    add_subdirectory(${ftxui_SOURCE_DIR} ${ftxui_BINARY_DIR} EXCLUDE_FROM_ALL)
endif()


set(CMAKE_CXX_STANDARD 17)
file(GLOB bhh
        "inc/*.h"
        "src/*.cpp"
)
include_directories("inc/")
add_executable(bhh ${bhh})
target_include_directories(bhh PRIVATE src)
target_link_libraries(bhh
        PRIVATE ftxui::screen
        PRIVATE ftxui::dom
        PRIVATE ftxui::component
)
