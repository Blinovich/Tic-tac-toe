#pragma once
#include "Player.h"
#include <iostream>
#include <vector>

class Game : protected Player {
public:
	Game();
	const void showField() const;
	bool play(const Player player);
	bool findWinner(const char sym) const;

private:
	const bool changeField(const int cell, const char sym);
	static std::vector <char> field;
};

