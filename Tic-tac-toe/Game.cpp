#include "Game.h"

std::vector<char> Game::field = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };

Game::Game()
{
}

const void Game::showField() const {
	for (size_t i = 0; i < 9; ++i) {
		if (i == 3 || i == 6) std::cout << " | " << std::endl;
		std::cout << " | " << field[i];
	}
	std::cout << " | ";
	std::cout << std::endl << std::endl;
}

bool Game::play(Player player) {
	int cell = 0;
	showField();

	while (true) {
		std::cout << player.getName() + "(" + player.getSym() + ")" + " select a cell: ";
		std::cin >> cell;
		if (cell >= 1 && cell <= 9) {
			if (changeField(cell - 1, player.getSym())) {
				break;
			}
		}
		std::cout << "Error!This cell is occupied or you have specified a non - existent cell\n";
	}
	system("cls");

	return findWinner(player.getSym());
}

				// | {0} | {1} | {2} | \\
				// | {3} | {4} | {5} | \\
				// | {6} | {7} | {8} | \\

bool Game::findWinner(const char sym) const {
	if      (field[0] == sym && field[1] == sym && field[2] == sym) return true;
	else if (field[3] == sym && field[4] == sym && field[5] == sym) return true;
	else if (field[6] == sym && field[7] == sym && field[8] == sym) return true;
	else if (field[0] == sym && field[3] == sym && field[6] == sym) return true;
	else if (field[1] == sym && field[4] == sym && field[7] == sym) return true;
	else if (field[2] == sym && field[5] == sym && field[8] == sym) return true;
	else if (field[0] == sym && field[4] == sym && field[8] == sym) return true;
	else if (field[2] == sym && field[4] == sym && field[6] == sym) return true;
	return false;
}

const bool Game::changeField(const int cell, const char sym) {
	if (field[cell] != 'X' && field[cell] != '0') {
		field[cell] = sym;
		return true;
	}
	return false;
}

