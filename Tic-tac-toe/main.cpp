#include <iostream>
#include "Game.h"
#include "Player.h"

int main() {
	std::string name;
	char sym = ' ', sym2 = ' ';

	Game game;

	if (rand() % 2 + 1 == 2) { sym = '0'; sym2 = 'X'; }
	else { sym = 'X'; sym2 = '0'; }

	//
		std::cout << "First player, enter your nickname: ";
		std::cin >> name;
		std::cout << name << ", you play for " << sym;
		Player p1(name, sym);

		std::cout << "\nSecond player, enter your nickname: ";
		std::cin >> name;
		std::cout << name << ", you play for " << sym2 << std::endl << std::endl;
		Player p2(name, sym2);
	//
		system("pause");
		system("cls");

	while (true) {
		int numMoves = 0;
		std::string exit;
		bool win = false;

		while (win == false) {
			

			win = game.play(p1);
			if (win == true) {
				game.showField();
				std::cout << p1.getName() << " you won!";
				p1.countOfWins();
				break;
			}

			if (++numMoves == 9) { std::cout << "Draw!"; break; }

			win = game.play(p2);
			if (win == true) {
				game.showField();
				std::cout << p2.getName() << " you won!";
				p2.countOfWins();
				break;
			}

			if (++numMoves == 9) { std::cout << "Draw!"; break; }
		}
		std::cout << std::endl;

		system("pause");
		system("cls");

		{
			std::cout << "Statistics: \n";
			std::cout << p1.getName() << " won " << p1.getCountOfWins() << " times\n";
			std::cout << p2.getName() << " won " << p2.getCountOfWins() << " times\n\n";
			std::cout << "Enter 1 if you want to exit.";
			std::cin >> exit;

			if (exit == "1") return 0;
		}
		system("cls");
	}
}
