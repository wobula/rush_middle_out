#include "GameEntity.class.hpp"
#include "Game.hpp"

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
	
      this->drawToWindow();
    }
  return(true);
}
  

void AGameEntity::drawToWindow(void) const
{
  mvprintw(this->_posX, this->_posY, "%c", this->_symbol);  // Draw this->AGameEntity at it's x and y after it has moved or not
  refresh();
}

bool AGameEntity::getAlive(void) const
{
  return (this->_isAlive);
}
