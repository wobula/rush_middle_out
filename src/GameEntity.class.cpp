#include "GameEntity.hpp"

GameEntity::GameEntity(void)
{
  this->_x;
  this->_y;
  this->_speed;
  this->_symbol;
  this->_lives;
  this->_isAlive;
}

GameEntity::GameEntity(std::string)
{
}

GameEntity::GameEntity(GameEntity &src)
{
}

GameEntity::~GameEntity(void)
{
  std::cout << "Destructor called" << std::endl;
}


bool GameEntity::move(int x, int y)
{
  std::cout << "Destructor called" << std::endl;
  // if movement results in a collision return false and kill entity;
  if (this->_x + x is occupied)
    return (false);
  return(true);
}
  
