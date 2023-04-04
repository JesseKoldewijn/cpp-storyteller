#include <iostream>
#include <chrono>
#include <thread>

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
        std::cout<< u8"\033[2J\033[1;1H"; // Using ANSI Escape Sequences 
    #elif defined (__APPLE__)
        system("clear");
    #endif
}

/**
 * Typing text animation which std:cout's the given text_to_print input.
 * @param text_to_print Type: std::string | Desc: Text that will be printed to the screen.
 * @param typing_speed Type: std::int32_t | Desc: Typingspeed in ms.
*/
void typed_text (std::string text_to_print, std::int32_t typing_speed) {
    for (const auto c : text_to_print) {
        std::wcout << c << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(typing_speed));
    }
}