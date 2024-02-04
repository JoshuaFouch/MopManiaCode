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

		if (choice == 6){
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