/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Entity.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dubious </var/mail/dubious>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 20:04:52 by dubious           #+#    #+#             */
/*   Updated: 2017/07/08 22:20:10 by dubious          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENTITY_HPP
# define ENTITY_HPP

# include <iostream>
# include <string>
# include "Entity.class.hpp"

class Entity {

public:

	Entity(void);
	Entity(const Entity *ent);
	Entity(Entity const & old);
	Entity(void);
	~Entity(void);

	Entity	&operator=(Entity const &old);

	bool	isEmpty(void) const;
	Entity	*getEnt(void) const;

private:
	bool	_empty;
	Entity	*_ent;

};

std::ostream	&operator<<(std::ostream &o, Entity const &c);

#endif
