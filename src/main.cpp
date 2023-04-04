#include <iostream>
#include <chrono>
#include <thread>

#include "./utils/output.cpp"

int main(int, char**) {
    using namespace std::this_thread;     // sleep_for, sleep_until
    using namespace std::chrono_literals; // ns, us, ms, s, h, etc.

    // Wipe screen content before init section
    clear_screen();

    // Init section
    std::string string1 = "Initializing";
    std::string string1_2 = "..........\n";
    typed_text(string1,200);
    typed_text(string1_2,375);

    // Wipe screen content of init section
    clear_screen();

    std::string string2 = "Hello and welcome to Cpp StoryTeller!";
    typed_text(string2,200);

    sleep_for(500ms);
}
