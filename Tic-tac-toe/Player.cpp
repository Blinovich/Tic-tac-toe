#include "Player.h"

Player::Player()
{
}

Player::Player(const std::string name, const char sym) {
	this->name = name;
	this->sym = sym;
}

const char Player::getSym() const
{
	return sym;
}

const std::string Player::getName() const
{
	return name;
}

const void Player::countOfWins() {
	counterWins += 1;
}

const int Player::getCountOfWins() const {
	return counterWins;
}
 