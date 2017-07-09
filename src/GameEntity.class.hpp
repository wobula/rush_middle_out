#ifndef GAMEENTITY_CLASS_HPP
# define GAMEENTITY_CLASS_HPP
# include <ncurses.h>
# include <string>
# include <iostream>

class AGameEntity
{
public:

  virtual void move(void) = 0;
  virtual void drawToWindow(int x, int y) const = 0;
  
protected:
  
  int _posX;
  int _posY;
  int _dirX;
  int _dirY;
  int _speed;
  char _symbol;
  int _lives;
  bool _isAlive;
  
};

#endif
