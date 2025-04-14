#include <string>
#include <math.h>

#ifndef ARDUINOCOMPAT_H
#define ARDUINOCOMPAT_H

uint32_t micros();
uint32_t millis();

long map(long x, long in_min, long in_max, long out_min, long out_max);

// #define PI          M_PI
//#define TWO_PI      (2.0 * M_PI)
//#define RAD_TO_DEG  (180.0 / M_PI)

constexpr double PI = M_PI;
constexpr double TWO_PI = 2.0 * M_PI;
constexpr double RAD_TO_DEG = 180.0 / M_PI;

class Serial {
public:
    static void print(std::string arg);
    static void println(std::string arg);

    static void print(int arg);
    static void println(int arg);

    static void print(double arg);
    static void println(double arg);
    
    static void print(char arg);
    static void println(char arg);
};

#endif