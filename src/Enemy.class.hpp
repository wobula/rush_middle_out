#ifndef ENEMY_CLASS_HPP
# define ENEMY_CLASS_HPP

# include "GameEntity.class.hpp"
# include <iostream>
# include <string>

<<<<<<< HEAD
class Enemy : public AGameEntity{
=======
class Enemy : public AGameEntity 
{
>>>>>>> 8b6d806265742b6e6a296f2bd96d11d0d3e34c4c

public:
	//methods
	void shoot(std::string gun);
	bool move(int x, int y);
	bool checkCollision(void);

	Enemy(void);
<<<<<<< HEAD
  //	Enemy(/* args */);
	Enemy(Enemy const & old);
  //	Enemy(void);
	~Enemy(void); // to be updated

	Enemy &operator=(Enemy const &old);

  bool move(int x, int y);
  bool CheckCollisionObject(char c) const;
  bool 
  
private:
  

=======
	Enemy(std::string name);
	Enemy(Enemy const & old);
	~Enemy(void); // to be updated

	Enemy			&operator=(Enemy const &old);

private:
	void _initValue(void);
>>>>>>> 8b6d806265742b6e6a296f2bd96d11d0d3e34c4c
};

std::ostream	&operator<<(std::ostream &o, Enemy const &c);

#endif
