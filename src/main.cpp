//
// Created by sw on 23-10-23.
//
#include <functional>
#include <iostream>
#include <vector>
#include <ftxui/screen/screen.hpp>
#include "ftxui/component/captured_mouse.hpp"      // for ftxui
#include "ftxui/component/component.hpp"           // for Menu
#include "ftxui/component/component_options.hpp"   // for MenuOption
#include "ftxui/component/screen_interactive.hpp"  // for ScreenInteractive
#include "DFS.h"
#include "BFS.h"

const int N = 8;


int main() {
    using namespace ftxui;
    auto screen = ScreenInteractive::TerminalOutput();
    DFS dfs(N);
    BFS bfs(N);
    std::vector<std::string> entries = {
            "深度优先",
            "广度优先",
    };
    int selected = 0;

    MenuOption option;
    option.on_enter = screen.ExitLoopClosure();
    auto menu = Menu(&entries, &selected, option);

    screen.Loop(menu);

    switch (selected) {
        case 0:
            dfs.Solve();
            std::cout << "Selected element = " << 0 << std::endl;
            break;
        case 1:
            bfs.Solve();
            std::cout << "Selected element = " << 1 << std::endl;
            break;
    }
    return 0;
}
