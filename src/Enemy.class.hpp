#ifndef ENEMY_CLASS_HPP
# define ENEMY_CLASS_HPP

# include <iostream>
# include <string>

class Enemy {

public:

	Enemy(void);
	Enemy(/* args */);
	Enemy(Enemy const & old);
	Enemy(void);
	~Enemy(void); // to be updated

	Enemy			&operator=(Enemy const &old);

	void			sampleFunction(void) const;

private:
	int		_hp;
	int		_x;
	int		_y;


};

std::ostream	&operator<<(std::ostream &o, Enemy const &c);

#endif
