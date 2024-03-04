#ifndef UTILITY
#define UTILITY

#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <chrono>
#include <thread>

void clear();	//clears the screen
void MSdelay(int n);	//delays the next output of n amount of milliseconds
void Sdelay(int n);	//delays the next output of n amount of seconds
void color(int n);	//change the color

#endif