#include "GameEntity.class.hpp"

// AGameEntity::AAGameEntity(void)
// {
//   this->_x = 0;
//   this->_y = 0;
//   this->_speed = 1;
//   this->_dirx = 1;
//   this->_diry = 1;  
//   this->_symbol = '#';
//   this->_lives = 1;
//   this->_isAlive = true;
// }

// AGameEntity::AGameEntity(std::string name)
// {
//   this->_x = 0;
//   this->_y = 0;
//   this->_speed = 1;
//   this->_dirx = 1;
//   this->_diry = 1;  
//   this->_symbol = '#';
//   this->_lives = 1;
//   this->_isAlive = true;
// }

// AGameEntity::AGameEntity(AGameEntity &src)
// {
//   this->_x = src._x;
//   this->_y = src._y;
//   this->_speed = src._speed;
//   this->_dirx = src._dirx;
//   this->_diry = src._diry;  
//   this->_symbol = src._symbol;
//   this->_lives = src._lives;
//   this->_isAlive = src._isAlive;
// }

// AGameEntity::~AGameEntity(void)
// {
//   std::cout << "Destructor called" << std::endl;
// }


bool AGameEntity::move(int x, int y)
{
  char pos;
  
  // if movement results in a collision return false and kill entity;
  if (this->_posX + x >= maxX)
    {
      mvprintw(this->_posX, this->_posY, "%c", 'X');
      return (false);
    }
  else if (this->_posY + y >= maxY)
    {
      mvprintw(this->_posX, this->_posY, "%c", 'X');
      return (false);
    }
  
  else
    {
      this->_posX += x;
      this->_posY += y;
      mvscanw(this->_posY, this->_posX, "%c", pos);
      if (pos == '<')
	
      this->drawToWindow(this->x, this->y);
    }
  return(true);
}
  

void AGameEntity::drawToWindow(int x, int y) const
{
  mvprintw(this->_posX, this->_posY, "%c", this->_symbol);  // Draw this->AGameEntity at it's x and y after it has moved or not
  refresh()
}

void AGameEntity::getAlive(void) const
{
  return (this->_isAlive);
}
