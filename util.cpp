#include <unistd.h>
#include "util.hpp"
#include <string>
#include <iostream>
#include <chrono>
#include <thread>
char white[] = "\033[0;97m";
char clear[] = "\033[2J\033[u";
char normal[] = "\x1b[0;39m";
char black[] = "\x1b[0;30m";
char red[] = { 0x1b, '[', '0', ';', '3', '1', 'm', 0    };
char green[] = { 0x1b, '[', '0', ';', '3', '2', 'm', 0  };
char yellow[] = { 0x1b, '[', '0', ';', '3', '3', 'm', 0 };
char blue[] = { 0x1b, '[', '0', ';', '3', '4', 'm', 0   };
char purple[] = { 0x1b, '[', '0', ';', '3', '5', 'm', 0 };
char cyan[] = { 0x1b, '[', '0', ';', '3', '6', 'm', 0   };
char Lgray[] = { 0x1b, '[', '0', ';', '3', '7', 'm', 0  };
char Dgray[] = { 0x1b, '[', '0', ';', '3', '8', 'm', 0  };
char Bred[] = { 0x1b, '[', '1', ';', '3', '1', 'm', 0   };
  //                          ^ change them to a 1 to make them bold 
unsigned int microsecond = 1000000;

void slow_print(const std::string& message, unsigned int millis_per_char) {
  for (const char c : message) {
    // flush is used to make sure the console is empty
    std::cout << c << std::flush;

    // Ask the thread to sleep for at least n millis.
    std::this_thread::sleep_for(std::chrono::milliseconds(millis_per_char));
  }
}