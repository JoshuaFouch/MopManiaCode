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

void Dotdot()
{
	clear();
	std::cout << "."; MSdelay(350);
	std::cout << "."; MSdelay(350);
	std::cout << "."; MSdelay(350);
	clear();
	std::cout << "."; MSdelay(350);
	std::cout << "."; MSdelay(350);
	std::cout << "."; MSdelay(350);
	clear();
	std::cout << "."; MSdelay(350);
	std::cout << "."; MSdelay(350);
	std::cout << "."; MSdelay(350);
	clear();
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

void color(char n)
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

void playMusic(std::string filename)
{
	std::wstring wideFilename(filename.begin(), filename.end());
	PlaySound(wideFilename.c_str(), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
}

void endMusic()
{
	PlaySound(0, 0, 0);
}

void playSFX(std::string filename)
{
	std::wstring wideFilename(filename.begin(), filename.end());
	PlaySound(wideFilename.c_str(), NULL, SND_FILENAME | SND_ASYNC);
}

void whereText() {
	std::cout << "W"; MSdelay(30); std::cout << "h"; MSdelay(30); std::cout << "e"; MSdelay(30); std::cout << "r"; MSdelay(30); std::cout << "e "; MSdelay(30);
	std::cout << "w"; MSdelay(30); std::cout << "o"; MSdelay(30); std::cout << "u"; MSdelay(30); std::cout << "l"; MSdelay(30); std::cout << "d "; MSdelay(30);
	std::cout << "y"; MSdelay(30); std::cout << "o"; MSdelay(30); std::cout << "u "; MSdelay(30);
	std::cout << "l"; MSdelay(30); std::cout << "i"; MSdelay(30); std::cout << "k"; MSdelay(30); std::cout << "e "; MSdelay(30);
	std::cout << "t"; MSdelay(30); std::cout << "o "; MSdelay(30);
	std::cout << "g"; MSdelay(30); std::cout << "o?" << std::endl; MSdelay(30);
}

void whatText() {
	std::cout << "W"; MSdelay(30); std::cout << "h"; MSdelay(30); std::cout << "a"; MSdelay(30); std::cout << "t "; MSdelay(30);
	std::cout << "w"; MSdelay(30); std::cout << "o"; MSdelay(30); std::cout << "u"; MSdelay(30); std::cout << "l"; MSdelay(30); std::cout << "d "; MSdelay(30);
	std::cout << "y"; MSdelay(30); std::cout << "o"; MSdelay(30); std::cout << "u "; MSdelay(30);
	std::cout << "l"; MSdelay(30); std::cout << "i"; MSdelay(30); std::cout << "k"; MSdelay(30); std::cout << "e "; MSdelay(30);
	std::cout << "t"; MSdelay(30); std::cout << "o "; MSdelay(30);
	std::cout << "d"; MSdelay(30); std::cout << "o?" << std::endl; MSdelay(30);
}
