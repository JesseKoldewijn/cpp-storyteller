#include <iostream>
#include <chrono>
#include <thread>

#include "utils.cpp"

int main(int, char**) {
    using namespace std::this_thread;     // sleep_for, sleep_until
    using namespace std::chrono_literals; // ns, us, ms, s, h, etc.

    // Init section
    std::string string1 = "Initializing";
    std::string string1_2 = "..........\n";
    typed_text(string1,200);
    typed_text(string1_2,375);
    sleep_for(100ms);

    // Wipe screen content of init section
    clear_screen();

    std::string string2 = "Hello and welcome to my Clang test project!";
    typed_text(string2,200);

    sleep_for(500ms);
}
