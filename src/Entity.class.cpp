/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Entity.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dubious </var/mail/dubious>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 20:04:52 by dubious           #+#    #+#             */
/*   Updated: 2017/07/08 22:20:10 by dubious          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Entity.class.hpp"
#include "Entity.class.hpp"

Entity::Entity(void) : _empty(true), _ent(nullptr) {
	std::cout << "Entity Default Constructor" << std::endl;
	return;
}

Entity::Entity(const Entity *ent) : _empty(false) _ent(ent) {
	std::cout << "Entity Parametric Constructor" << std::endl;
	return;
}

Entity::Entity(Entity const &old) {
	std::cout << "Entity Copy Constructor" << std::endl;
	*this = old;
	return;
}

Entity::~Entity(void) {
	std::cout << "Entity Destructor" << std::endl;
	return;
}

Entity			&Entity::operator=(Entity const &old)
{
	std::cout << "Entity Assignment Operator" << std::endl;
	if (this != &old)
	{
			this->_empty = old.isEmpty();
			this->_ent = old.getEnt();
	}
	return *this;
}

bool			Entity::isEmpty(void) const
{
		return (this->_empty);
}

Entity			*getEnt(void) const
{
		return (this->_ent);
}

std::ostream	&operator<<(std::ostream &o, Entity const &c)
{
	o << "LIST (" << c->getEnt() << ")";
	return (o);
}
