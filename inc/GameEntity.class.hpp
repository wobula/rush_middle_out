#ifndef GAMEENTITY_CLASS_HPP
# define GAMEENTITY_CLASS_HPP
# include <ncurses.h>
# include <string>
# include <iostream>

class GameEntity
{
public:

  GameEntity(void);
  // GameEntity(std::string name);
  GameEntity(GameEntity &src);
  ~GameEntity(void);
  void move(void);
  void drawToWindow(int x, int y) const;
  void getAlive(void) const;
  
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
