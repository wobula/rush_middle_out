/*=============================================================================
 * Project: Rush00 - Middle Out
 *
 * Program: Create a game with n-cursus
 *
 * Author: Sesl, Irhett, Tiny, Bemillie, Searsie
 * ==========================================================================*/

//x, y, dirx, diry, speed, symbol, hp, isalive

#include <iostream>
#include <string>
#include "Player.class.hpp"

// OPERATOR OVERLOADS //

Player & Player::operator=(Player const & rhs)
{
	this->_x = rhs._x;
	this->_y = rhs._y;
	this->_dirx = rhs._dirx;
	this->_diry = rhs._diry;
	this->_speed = rhs._speed;
	this->_symbol = rhs._symbol;
	this->_hp = rhs._hp;
	this->_isalive = rhs._isalive;
	this->_name = rhs._name;
	return *this;
}

// CONSTRUCTORS //

Player::Player(std::string name)
{
	std::srand(std::time(NULL));
	this->_initValue();
	this->_name = name;
	std::cout << "Player " << this->_name
		<< " has been created!" << std::endl;
}

Player::Player(Player const & src)
{
	std::srand(std::time(NULL));
	*this = src;
	std::cout << "Player " << this->_name
		<< " has been created!" << std::endl;
	return;
}

Player::Player(void)
{
	std::srand(std::time(NULL));
	this->_initValue();
	//std::cout << "Player has been created!" << std::endl;
	mvwprintw(Game::_debugwin, GAME::_maxX / 2, GAME::_maxY / 2, "Player has been created!");
}

// DECONSTRUCTORS //

Player::~Player(void)
{
	mvwprintw(GAME::_debugwin, GAME::_maxX / 2, GAME::_maxY / 2, "Player has been destroyed!");
	return;
}

// INIT //

void _initValue(void)
{
	this->_name = "PlayerOne";
	this->_x = 0;
	this->y = 0;
	this->_dirx = 1;
	this->diry = 1;
	this->speed = 1;
	this->symbol = '@';
	this->lives = 3;

}