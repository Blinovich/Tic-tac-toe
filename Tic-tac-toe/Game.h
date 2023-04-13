#pragma once
#include "Player.h"
#include <iostream>
#include <vector>

class Game : protected Player {
public:
	const void showField();
	bool play(const Player player);
	bool findWinner(const char sym);
	bool changeField(const int cell, const char sym);

private:
	static std::vector <char> field;
};

