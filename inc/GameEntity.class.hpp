#ifndef GAMEENTITY_CLASS_HPP
# define GAMEENTITY_CLASS_HPP
# include <ncurses.h>
# include <string>
# include <iostream>

class AGameEntity
{
public:

  AGameEntity(void);
  // GameEntity(std::string name);
  AGameEntity(AGameEntity &src);
  ~AGameEntity(void);
  virtual void move(void) = 0;
  virtual void drawToWindow(int x, int y) const = 0;
  
protected:
  
  int _x;
  int _y;
  int _dirx;
  int _diry;
  int _speed;
  char _symbol;
  int _lives;
  bool _isAlive;
  
};

#endif
