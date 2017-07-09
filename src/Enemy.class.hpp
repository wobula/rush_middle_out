#ifndef ENEMY_CLASS_HPP
# define ENEMY_CLASS_HPP

# include <iostream>
# include <string>

class Enemy : public AGameEntity 
{

public:
	//methods
	void shoot(std::string gun);
	bool move(int x, int y);
	bool checkCollision(void);

	Enemy(void);
	Enemy(std::string name);
	Enemy(Enemy const & old);
	~Enemy(void); // to be updated

	Enemy			&operator=(Enemy const &old);

private:
	void _initValue(void);
};

std::ostream	&operator<<(std::ostream &o, Enemy const &c);

#endif
