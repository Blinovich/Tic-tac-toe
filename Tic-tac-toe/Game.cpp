#include "Game.h"

// | {0} | {1} | {2} | \\
// | {3} | {4} | {5} | \\
// | {6} | {7} | {8} | \\


std::vector<char> Game::field = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };

const void Game::showField() {
	int i = 0;
	for (const auto elem : field) {
		++i;
		if (i == 3 || i == 6) std::cout << std::endl;
		std::cout << " | " + elem;
	}
}

bool Game::play(Player player) {
	int cell = 0;
	showField();

	while (true) {
		std::cout << player.getName() + "(" + player.getSym() + ") " + "select a cell: ";
		std::cin >> cell;

		if (changeField(cell, player.getSym())) {
			break;
		}
		std::cout << "Error!This cell is occupied or you have specified a non - existent cell\n";
	}

	return findWinner(player.getSym());
}

bool Game::findWinner(const char sym) {
	if (field[0] == sym && field[1] == sym && field[2] == sym) return true;
	else if (field[3] == sym && field[4] == sym && field[5] == sym) return true;
	else if (field[6] == sym && field[7] == sym && field[8] == sym) return true;
	else if (field[0] == sym && field[3] == sym && field[6] == sym) return true;
	else if (field[1] == sym && field[4] == sym && field[7] == sym) return true;
	else if (field[2] == sym && field[5] == sym && field[8] == sym) return true;
	else if (field[0] == sym && field[4] == sym && field[8] == sym) return true;
	else if (field[2] == sym && field[4] == sym && field[6] == sym) return true;
	return false;
}

bool Game::changeField(const int cell, const char sym) {
	if (field[cell] != 'X' || field[cell] != '0' && cell <= 9) {
		field[cell] = sym;
		return true;
	}
	return false;
}

