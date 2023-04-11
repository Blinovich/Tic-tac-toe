#pragma once
#include "Player.h"
#include <iostream>
#include <vector>

class Game : public Player {
public:
	void showField();
private:
	std::vector <char> field = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
};

