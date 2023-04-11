#pragma once
#include <iostream>

class Player {
public:
	Player(const std::string name, const char sym);

private:
	std::string name;
	char sym;
};

