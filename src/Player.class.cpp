/*=============================================================================
 * Project: Rush00 - Middle Out
 *
 * Program: Create a game with n-cursus
 *
 * Author: Sesl, Irhett, Tiny, Bemillie, Searsie
 * ==========================================================================*/

#include <iostream>
#include <string>
#include <curses.h>
#include "Player.class.hpp"

// METHODS //

void Player::shoot(std::string gun)
{
	Missile::_instantiate(this->_posX + 1, this->_posY + 1);
}

bool Player::move(int x, int y)
{
	if (KEY_UP)
		this->_posX = this->_posX + 1;
	if (KEY_DOWN)
		this->_posX = this->_posX -1;
	if (KEY_LEFT)
		this->_posY = this->_posY + 1;
	if (KEY_RIGHT)
		this->_posY this->_posY - 1;
}

// OPERATOR OVERLOADS //

Player & Player::operator=(Player const & rhs)
{
	this->_posX = rhs._posX;
	this->_posY = rhs._posY;
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
	if (Game::debug)
	{
		std::cout << "Player " << this->_name
			<< " has been created!" << std::endl;
	}
}

Player::Player(Player const & src)
{
	std::srand(std::time(NULL));
	*this = src;
	if (Game::_debug)
	{
		std::cout << "Player " << this->_name
			<< " has been created!" << std::endl;
	}
	return;
}

Player::Player(void)
{
	std::srand(std::time(NULL));
	this->_initValue();
	//std::cout << "Player has been created!" << std::endl;
	mvwprintw(Game::_stdscr, GAME::_maxX / 2, GAME::_maxY / 2, "Player has been created!");
}

// DECONSTRUCTORS //

Player::~Player(void)
{
	mvwprintw(GAME::_stdsrc, GAME::_maxX / 2, GAME::_maxY / 2, "Player has been destroyed!");
	return;
}

// INIT //

void _initValue(void)
{
	this->_name = "PlayerOne";
	this->_posX = 0;
	this->y = 0;
	this->_dirx = 1;
	this->diry = 1;
	this->speed = 1;
	this->symbol = '@';
	this->lives = 3;

}