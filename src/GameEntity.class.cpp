#include "GameEntity.class.hpp"

GameEntity::GameEntity(void)
{
  this->_x = 0;
  this->_y = 0;
  this->_speed = 1;
  this->_dirx = 1;
  this->_diry = 1;  
  this->_symbol = '#';
  this->_lives = 1;
  this->_isAlive = true;
}

GameEntity::GameEntity(std::string name)
{
  this->_x = 0;
  this->_y = 0;
  this->_speed = 1;
  this->_dirx = 1;
  this->_diry = 1;  
  this->_symbol = '#';
  this->_lives = 1;
  this->_isAlive = true;
}

GameEntity::GameEntity(GameEntity &src)
{
  this->_x = src._x;
  this->_y = src._y;
  this->_speed = src._speed;
  this->_dirx = src._dirx;
  this->_diry = src._diry;  
  this->_symbol = src._symbol;
  this->_lives = src._lives;
  this->_isAlive = src._isAlive;
}

GameEntity::~GameEntity(void)
{
  std::cout << "Destructor called" << std::endl;
}


bool GameEntity::move(int x, int y)
{
  std::cout << "Destructor called" << std::endl;
  // if movement results in a collision return false and kill entity;
  if (this->_x + x >= maxX)
    {
      mvprint(Game::
      return (false);
    }
  else if (this->_y + y >= maxY)
    return (false);
  return(true);
}
  
