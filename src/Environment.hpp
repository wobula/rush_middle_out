#ifndef ENVIRONMENT_HPP
# define ENVIRONMENT_HPP

#include <cstdlib>
#include <cstring>
#include <string>
#include <iostream>
#include <ctime>
#include <curses.h>
#include "Game.hpp"

class   Environment
{
        char    stars[81];
        public:

                Environment( void );
                void    starsRnd( void );
                ~Environment( void );

        private:
                unsigned int _characters;
};

#endif