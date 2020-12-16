#ifndef UTIL_HPP
#define UTIL_HPP

#include <string>
#include <iostream>
#include <chrono>
#include <thread>

void slow_print(const std::string& message, unsigned int millis_per_char=10);

#endif