#include "Player.h"

int Player::NumberOfWins = 0;

Player::Player(const std::string name, const char sym) {
	this->name = name;
	this->sym = sym;
}

char Player::getSym()
{
	return sym;
}

std::string Player::getName()
{
	return name;
}
 