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

	SetConsoleTextAttribute(h, n);
}