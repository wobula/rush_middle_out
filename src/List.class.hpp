/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   List.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dubious </var/mail/dubious>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 20:04:52 by dubious           #+#    #+#             */
/*   Updated: 2017/07/08 22:19:12 by dubious          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_CLASS_HPP
# define LIST_CLASS_HPP

# include <iostream>
# include <string>
# include "Entity.class.hpp"

class List {

public:

	List(void);
	List(const Entity *ent);
	List(List const & old);
	List(void);
	~List(void);

	List	&operator=(List const &old);

	bool	isEmpty(void) const;
	Entity	*getEnt(void) const;

private:
	bool	_empty;
	Entity	*_ent;

};

std::ostream	&operator<<(std::ostream &o, List const &c);

#endif
