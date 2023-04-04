#include <chrono>
#include <iostream>
#include <thread>

using namespace std;
using namespace std::this_thread;     // sleep_for, sleep_until
using namespace std::chrono_literals; // ns, us, ms, s, h, etc.

#include "./utils/output.cpp"

int main(int, char**) {
    // Wipe screen content before init section
    clear_screen();

    // Init section
    string string1 = "Initializing";
    string string1_2 = "..........\n";
    typed_text(string1, 200);
    typed_text(string1_2, 375);
    // End - Init section

    // Wipe screen content of init section
    clear_screen();

    // Welcome section
    string string2 = "Hello and welcome to Cpp StoryTeller!";
    typed_text(string2, 200);
    // End - Welcome section

    // Sleeping for a bit to allow some peace while reading
    sleep_for(5s);

    // Exiting out of program
    exit(0);
}
