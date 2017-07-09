#include "Environment.hpp"

static bool colors = TRUE;
static unsigned char  movement = 0;
static unsigned int state = 42424242;

Environment::Environment( void )
{
   // std::srand(time(NULL));
    mvprintw(Game::maxX >> 1, Game::maxY >> 1,"Let the games begin\n");
    Environment::starsRnd();
    return ;
}
unsigned int    Environment::starShift(void)/* random number generator */
{
    unsigned int x = state;

    x ^= x << 13;
	x ^= x >> 17;
	x ^= x << 5;
    state = x;
    return x;
}
void    Environment::starsRnd( void )/* Displays the stars randomly in terminal*/
{
    Environment::stars[125] = '\0';
    std::memset(Environment::stars, ' ', 125);
    start_color();			/* Start color 			*/
	    init_pair(1, COLOR_BLUE, COLOR_BLACK);
        init_pair(2, COLOR_MAGENTA, COLOR_BLACK);
        init_pair(3, COLOR_WHITE, COLOR_BLACK);
    if (colors)
    {
        attron(COLOR_PAIR(1));
        Environment::stars[starShift() % 125] = '*';
        colors = FALSE;
        movement++;
    }
    else
    {
        Environment::stars[starShift() % 125] = '.';
        attron(COLOR_PAIR(2));
        colors = TRUE;
        movement++;
    }
    if (movement == 10)
    {
        Environment::stars[starShift() % 125] = 'O';
        attron(COLOR_PAIR(3));
        movement = 0;
    }
    mvprintw(0, 0, Environment::stars);
    attroff(COLOR_PAIR(1));
    attroff(COLOR_PAIR(2));
    scrollok(stdscr, TRUE);
    scrl(-1);
    return ;
}

Environment::~Environment( void )
{
    return ;
}