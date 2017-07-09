#ifndef ENEMY_CLASS_HPP
# define ENEMY_CLASS_HPP

# include "GameEntity.class.hpp"
# include <iostream>
# include <string>

class Enemy : public AGameEntity{

public:

	Enemy(void);
  //	Enemy(/* args */);
	Enemy(Enemy const & old);
  //	Enemy(void);
	~Enemy(void); // to be updated

	Enemy &operator=(Enemy const &old);

  //bool  move(void);
  bool checkCollisionObject(char c) const;
  bool checkCollision(void);
  void _initValue(void);
  void doAction(void);
  
private:
  std::string name;

};

std::ostream	&operator<<(std::ostream &o, Enemy const &c);

#endif


