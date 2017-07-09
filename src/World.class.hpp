/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   World.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dubious </var/mail/dubious>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 00:03:40 by dubious           #+#    #+#             */
/*   Updated: 2017/07/09 01:00:45 by dubious          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WORLD_CLASS_HPP
# define WORLD_CLASS_HPP

# include <iostream>
# include <string>
# include "List.class.hpp"
# include "Entity.class.hpp"


class World {

		public:

				World(int height, int width);
				~World(void); // to be updated
				void			addEnemy(void);
				void			addEnemy(int x);
				bool			doCycle(void); //input args?

				Entity			**grid;

		private:
				World(void);
				World(World const & old);
				World			&operator=(World const &old);

				void			_act(List *Entities);
				bool			_playerInput(void/*args*/); // input args?
				void			_cleanup(void);


				int				_width;
				int				_height;

				List			*_Bullets;
				List			*_Enemies;
				Entity			*_Player;

};

std::ostream	&operator<<(std::ostream &o, World const &c);

#endif
