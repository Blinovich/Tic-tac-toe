#pragma once
#include <iostream>

class Player {
public:
	Player();
	Player(const std::string name, const char sym);
	const char getSym() const;
	const std::string getName() const;
	const void countOfWins();
	const int getCountOfWins() const;

private:
	int counterWins = 0;
	std::string name;
	char sym;
};

