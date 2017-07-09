/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Entity.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dubious </var/mail/dubious>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 20:04:52 by dubious           #+#    #+#             */
/*   Updated: 2017/07/09 01:18:23 by dubious          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Entity.class.hpp"
#include "World.class.hpp"

Entity::Entity(void) : _empty(true), _ent(nullptr) {
		std::cout << "Entity Default FUCK" << std::endl;
		return;
}

Entity::Entity(const Entity *ent) : _empty(false) _ent(ent) {
		std::cout << "Entity Parametric FUCK" << std::endl;
		return;
}

Entity::Entity(Entity const &old) {
		std::cout << "Entity Copy FUCK" << std::endl;
		*this = old;
		return;
}

Entity::~Entity(void) {
		std::cout << "Entity Destructor" << std::endl;
		return;
}

Entity			&Entity::operator=(Entity const &old)
{
		std::cout << "Entity Assignment FUCK" << std::endl;
		if (this != &old)
		{
				;
		}
		return *this;
}

bool			Entity::isAlive(void) const
{
		return (this->_alive);
}

void			Entity::die(void)
{
		this->_alive = false;
}

void			Entity::act(World &w)
{
		Entity	*e;

		if (this->_isAlive)
		{
				// do shit
				e = this->getUp(w);
				if (e)
				{
						this.die();
						e.die();
				}
				else
						this.moveUp(w);
		}
		else
				;// don't do shit
		(void)w;
		return;
}

char			Entity::getSymbol(void) const
{
		return (this->_symbol);
}

void			Entity::moveUp(World &w)
{
		this->_y = this->_y - 1;
		w->grid[this->_y][this->_x] = &this;
		w->grid[this->_y + 1][this->_x] = nullptr;
}

void			Entity::moveDown(World &w)
{
		this->_y = this->_y + 1;
		w->grid[this->_y][this->_x] = &this;
		w->grid[this->_y - 1][this->_x] = nullptr;
}

void			Entity::moveLeft(World &w)
{
		this->_x = this->_x - 1;
		w->grid[this->_y][this->_x] = &this;
		w->grid[this->_y][this->_x + 1] = nullptr;
}

void			Entity::moveUp(World &w)
{
		this->_x = this->_x + 1;
		w->grid[this->_y][this->_x] = &this;
		w->grid[this->_y][this->_x - 1] = nullptr;
}

Entity			*Entity::getLeft(World &w)
{
		return (w->grid[this->_y][this->_x - 1]);
}

Entity			*Entity::getRight(World &w)
{
		return (w->grid[this->_y][this->_x + 1]);
}

Entity			*Entity::getUp(World &w)
{
		return (w->grid[this->_y - 1][this->_x]);
}

Entity			*Entity::getDown(World &w)
{
		return (w->grid[this->_y + 1][this->_x]);
}

std::ostream	&operator<<(std::ostream &o, Entity const &c)
{
		o << "LIST (" << c->getEnt() << ")";
		return (o);
}
