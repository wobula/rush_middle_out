#include <iostream>
#include <string>
#include "Enemy.class.hpp"

Enemy::Enemy(void) {
	this->_initValue(void);
	std::cout << "Enemy Default Constructor" << std::endl;
	return;
}

Enemy::Enemy(std::string name) {
	this->_initValue(void);
	this->_name = name;
	std::cout << "Enemy Parametric Constructor" << std::endl;
	return;
}

Enemy::Enemy(Enemy const &old) {
	std::srand(std::time(NULL));
	*this = src;
	std::cout << "Enemy " << this->_name
		<< " has been created!" << std::endl;
	return;
}

Enemy::~Enemy(void) {
	std::cout << "Enemy Destructor" << std::endl;
	return;
}

void			Enemy::sampleFunction(void) const
{
	std::cout << "Enemy Sample Function" << std::endl
}

Enemy				&Enemy::operator=(Enemy const &old)
{
	std::cout << "Enemy Assignment Operator" << std::endl;
	if (this != &old)
		this->_privateFoo = old.getFoo();
	return *this;
}

std::ostream	&operator<<(std::ostream &o, Enemy const &c)
{
	o << "To String Function of Enemy: " << c.getFoo();
	return (o);
}

// METHODS //

void Enemy::shoot(std::string gun)
{
	std::cout << "Shooting with " << gun << std::endl;
	//Missile::_instantiate(this->_posX + 1, this->_posY + 1);
}



bool Enemy::move(int x, int y)
{
	if (this->_posX + 1 == Game::maxX)
	{
		this->_dirX *= -1;
		this->_dirY = 1;
	}
	this->_posX = this->_posX + this->_dirX;
	this->posY = this->posY + this->dirY;
	this->_dirX
	return (true);
}

bool checkCollisionObject(char c)
{
	if (c == Enemy::_symbol)
	{
		this->_lives--;
		std::cout << "Enemy hit!" << std::endl;
		return true;
	}
	return false;
}

bool Enemy::checkCollision(void)
{
	char d;
	if (this->move() == 0)
	{
		if (mvscanw(this->_posY + 1, this->posX, "%c", d))
			this->_lives--;
		checkCollisionObject(d);
		if (mvscanw(this->_posY, this->posX + 1, "%c", d))
			this->_lives--;
		checkCollisionObject(d);
		if (mvscanw(this->_posY, this->posX - 1, "%c", d))
			this->_lives--;
		checkCollisionObject(d);
	}

}

//INIT

void Enemy::_initValue(void)
{
	this->_name = "Enemy";
	this->_posX = 0;
	this->_posY = 0;
	this->_dirX = 1;
	this->_dirY = 0;
	this->_speed = 1;
	this->_symbol = 'X';
	this->_lives = 3;

}
