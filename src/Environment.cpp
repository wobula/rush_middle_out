#include "Environment.hpp"

static int  movement = 0;

Environment::Environment( void )
{
    std::srand(time(NULL));
    mvprintw(Game::maxX >> 1, Game::maxY >> 1,"Let the games begin\n");
    Environment::starsRnd();
    return ;
}

void    Environment::starsRnd( void )
{
    Environment::stars[80] = '\0';
    std::memset(Environment::stars, '*', 80);
    getmaxyx(stdscr, Game::maxY, Game::maxX);
    mvprintw(15, 0, Environment::stars);
    scrollok(stdscr, TRUE);
    scrl(-1);
    //scroll(stdscr);
    refresh();
    return ;
}

Environment::~Environment( void )
{
    return ;
}