#include "utility.h"
#include "character.h"

#include <iostream>


void Game_Menu_Test() {
	int choice;

	while (true) {
		std::cout << "\nMop Mania\n";
		std::cout << "---------------------------------\n";
		std::cout << "1. Return to Game" << '\n';
		std::cout << "2. Enter Battle" << '\n';
		std::cout << "3. Manage Inventory" << '\n';
		std::cout << "4. Enter Shoppie" << '\n';
		std::cout << "5. Talk to Someone" << '\n';
		std::cout << "6. Quit Game" << '\n';
		std::cout << "---------------------------------\n";

		std::cin >> choice;

		if (choice == 6) {
			std::cout << "\nFarewell Mopdian! Come back again next time!" << '\n';
			break;
		}

		if (choice == 1) {
			//function returnToOverworld()
			std::cout << "1";
			break;
		}
		else if (choice == 2) {
			//function enterBattle()
			std::cout << "2";
			break;
		}
		else if (choice == 3) {
			//function manageInventory()
			std::cout << "3";
			break;
		}
		else if (choice == 4) {
			//function chatter()
			std::cout << "4";
			break;
		}
		else if (choice == 5) {
			//function quitGame()
			std::cout << "5";
			break;
		}
	}
}

void clear(character& c)
{
	if (c)
	system("CLS");
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


void DotdotTwo()
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
}

void playSFX_once(std::string filename) {
	std::wstring wideFilename(filename.begin(), filename.end());
	PlaySound(wideFilename.c_str(), NULL, SND_FILENAME);
}

void ellipsis() {
	MSdelay(500); std::cout << "."; MSdelay(500); std::cout << "."; MSdelay(500); std::cout << "."; Sdelay(2);
}

