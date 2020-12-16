#include <unistd.h>
#include "util.hpp"



int main() {
  unsigned int microsecond = 1000000; 
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
  std::cout << blue;
  slow_print("Welcome to the Barney talk show, I'm your host, Barney's dad!", 50);
  usleep(3 * microsecond);
  slow_print("\nSo what is your name audience!\n", 50);
  std::string name;
  std::cout << normal;
  std::cin >> name;
  std::cout << blue;
  slow_print("Oh, Hello ", 50);
  std::cout << name;
  slow_print("!\nIt sound like your having a good day so lets get a move on!\n");
  usleep(2 * microsecond);
  
}