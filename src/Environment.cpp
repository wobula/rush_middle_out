#include "Environment.hpp"

static unsigned char  movement = 0;
static unsigned int state = 42424242;

Environment::Environment( void )
{
   // std::srand(time(NULL));
    mvprintw(Game::maxX >> 1, Game::maxY >> 1,"Let the games begin\n");
    Environment::starsRnd();
    return ;
}
unsigned int    Environment::starShift(void)
{
    unsigned int x = state;

    x ^= x << 13;
	x ^= x >> 17;
	x ^= x << 5;
    state = x;
    return x;
}
void    Environment::starsRnd( void )
{
    Environment::stars[125] = '\0';
    std::memset(Environment::stars, ' ', 125);
    start_color();			/* Start color 			*/
	init_pair(1, COLOR_RED, COLOR_BLACK);
    Environment::stars[starShift() % 125/*(80 - (movement >> 1) + 1)*/] = '*';
    attron(COLOR_PAIR(1));
    mvprintw(0, 0, Environment::stars);
    attroff(COLOR_PAIR(1));
    scrollok(stdscr, TRUE);
    scrl(-1);
    return ;
}

Environment::~Environment( void )
{
    return ;
}