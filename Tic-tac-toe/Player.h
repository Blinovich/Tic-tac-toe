#pragma once
#include <iostream>

class Player {
public:
	Player(const std::string name, const char sym);
	char getSym();
	std::string getName();

	
private:
	static int NumberOfWins;
	std::string name;
	char sym;
};

