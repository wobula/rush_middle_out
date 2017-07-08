#ifndef GAMEENTITY_HPP
# define GAMEENTITY_HPP
# include <ncurses.h>
# include <string>
# include <iostream>

class GameEntity
{
public:

  GameEntity(void);
  GameEntity(std::string name);
  GameEntity(GameEntity &src);
  ~GameEntity(void);
  void move(void);
  
  
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
