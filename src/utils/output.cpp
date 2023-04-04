#include <iostream>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

#include <stdlib.h>

#include <cstdint>
#include <locale>

/**
 * Clears the console screen in different ways depending on the OS.
*/
void clear_screen () {
    #if defined _WIN32
        system("cls");
    #elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
        system("clear");
    #elif defined (__APPLE__)
        system("clear");
    #endif
}

/**
 * Typing text animation which std:cout's the given text_to_print input.
 * @param text_to_print Type: string | Desc: Text that will be printed to the screen.
 * @param typing_speed Type: int32_t | Desc: Typingspeed in ms.
*/
void typed_text (string text_to_print, int32_t typing_speed) {
    for (const auto c : text_to_print) {
        wcout << c << flush;
        sleep_for(milliseconds(typing_speed));
    }
}