#include "utility.h"

void clear()
{
	std::cout << "\033[2J\033[1;1H";
}

void MSdelay(int n)	//delay for milliseconds
{
	std::this_thread::sleep_for(std::chrono::milliseconds(n));
}

void Sdelay(int n)
{
	std::this_thread::sleep_for(std::chrono::seconds(n));
}

void color(int n)
{
	//for different text colors
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	/*
	0: Black
	1: Blue
	2: Green
	3: Aqua
	4: Red
	5: Purple
	6: Yellow
	7: Default White!!
	8: Gray
	9: Light Blue


	A: Light Green
	B: Light Aqua
	C: Light Red
	D: Light Purple
	E: Light Yellow
	F: Bright White
	*/
	SetConsoleTextAttribute(h, n);
}