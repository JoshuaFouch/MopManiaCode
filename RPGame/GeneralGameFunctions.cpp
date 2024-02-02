#pragma once
#include "GeneralGameFunctions.h"
#include <chrono>
#include <thread>
#include <Windows.h>



void Start_Menu()
{
	#pragma comment(lib, "winmm.lib")
	//play music (ambient music)
	PlaySound(TEXT("void.wav"), NULL, SND_FILENAME | SND_ASYNC );

	//for different text colors
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	std::this_thread::sleep_for(std::chrono::seconds(3));
	std::cout << "\n\nSYou wake up one day with no body... all you see is the void of darkness" << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(6));
	std::cout << "You hear a voice calling in the distance:" << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(3));
	SetConsoleTextAttribute(h, 6); //Janitorius (Tyler) is yellow text
	std::cout << "My dear soul,";
	std::cout << " I am Janitorius, the custodian of Le Hospitale." << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(4));
	std::cout << "You seem to have lost all your memory from that day." << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(4));
	std::cout << "You died.";
	std::this_thread::sleep_for(std::chrono::seconds(3));
	std::cout << " You unfortunately bit your tongue too hard until your legs began to fall off" << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(5));
	std::cout << "\nWell anyways, you failed in your previous life so now I will offer you a new life" << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(3));
	std::cout << "A life as a cleaning mop.";
	std::this_thread::sleep_for(std::chrono::seconds(4));
	std::cout << " Pretty lame right?" << std::endl;


	//end music
	PlaySound(0, 0, 0);
	//end text color
	SetConsoleTextAttribute(h, 7);

}