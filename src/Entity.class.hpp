/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Entity.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dubious </var/mail/dubious>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 20:04:52 by dubious           #+#    #+#             */
/*   Updated: 2017/07/09 00:43:42 by dubious          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENTITY_HPP
# define ENTITY_HPP

# include <iostream>
# include <string>

# include "World.class.hpp"

# define NORTH 0
# define SOUTH 1
# define EAST 2
# define WEST 3

class Entity {

		public:

				~Entity(void);

				bool	isAlive(void) const;

				void	moveUp(World &w);
				void	moveDown(World &w);
				void	moveLeft(World &w);
				void	moveRight(World &w);

				Entity	*getLeft(World &w) const;
				Entity	*getRight(World &w) const;
				Entity	*getUp(World &w) const;
				Entity	*getDown(World &w) const;
				char	getSymbol(void) const;

		private:

				Entity(void);
				Entity(const Entity *ent);
				Entity(Entity const & old);
				Entity(void);
				Entity	&operator=(Entity const &old);

				void	act(World &w);
				void	die(void);

				bool	_alive;
				int		_x;
				int		_y;
				int		_direction;
				char	_symbol;

};

std::ostream	&operator<<(std::ostream &o, Entity const &c);

#endif
