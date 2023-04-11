#include "Game.h"

void Game::showField() {
	int i = 0;
	for (const auto elem : field) {
		std::cout << " | " + elem;
	}
}
