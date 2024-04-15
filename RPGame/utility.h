#ifndef _UTILITY_H
#define _UTILITY_H

#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <chrono>
#include <thread>
#include <string>

void clear();	//clears the screen
void MSdelay(int n);	//delays the next output of n amount of milliseconds
void Sdelay(int n);	//delays the next output of n amount of seconds
void Dotdot();	//dot dot dot for text
void whereText();
void whatText();
void color(int n);	//change the color
void color(char n);
void playMusic(std::string filename);	//plays audio file that loop
void endMusic();
void playSFX(std::string filename);	//plays audio file that does not loop
#endif