/*=============================================================================
 * Project: Rush00 - Middle Out
 *
 * Program: Create a game with n-cursus
 *
 * Author: Sesl, Irhett, Tiny, Bemillie, Searsie
 * ==========================================================================*/

#ifndef PLAYER_HPP
# define PLAYER_HPP

#include "GameEntity.class.hpp"
#include "Game.hpp"

class Player : public AGameEntity
{
public:
	//methods
	void shoot(std::string gun);
	bool move(int x, int y);
  bool checkCollisionObject(char c);

	//operator overloads
	Player & operator=(Player const & rhs); //Canonical

	Player(std::string name); //Canonical
	Player(Player const & src); //canonical
	Player(void); //Canonical
	~Player(void); //Canonical
private:
	void _initValue(void);
};

#endif



// void move(int x, int y)


//   this->move(dirx, 0);
// if at boundary;
// this->move(0, -1)
// return;

// take action

// if posx + dirx  == boundarymax || boundary min
//   this->move( 0, -1);
