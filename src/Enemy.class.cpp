#include <iostream>
#include <string>
#include "Enemy.class.hpp"

Enemy::Enemy(void) {
	std::cout << "Enemy Default Constructor" << std::endl;
	return;
}

Enemy::Enemy(/*args*/) : _privateFoo(/*args*/) {
	std::cout << "Enemy Parametric Constructor" << std::endl;
	return;
}

Enemy::Enemy(Enemy const &old) {
	std::cout << "Enemy Copy Constructor" << std::endl;
	*this = old;
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
