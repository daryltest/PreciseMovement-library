#include "ArduinoCompat.hpp"
#include <math.h>
#include <pigpio.h>

uint32_t micros() {
    return gpioTick();
}

uint32_t millis() {
    return gpioTick() / 1000U;
}

long map(long x, long in_min, long in_max, long out_min, long out_max) {
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

void Serial::print(std::string arg) {
}

void Serial::println(std::string arg) {
}

void Serial::print(int arg) {
}

void Serial::println(int arg) {
}

void Serial::print(double arg) {
}

void Serial::println(double arg) {
}

void Serial::print(char arg) {
}

void Serial::println(char arg) {
}
