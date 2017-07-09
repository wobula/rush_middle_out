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
    getmaxyx(stdscr, Game::maxY, Game::maxX);
    start_color();			/* Start color 			*/
    init_pair(1, COLOR_BLUE, COLOR_BLACK);
    init_pair(2, COLOR_MAGENTA, COLOR_BLACK);
    init_pair(3, COLOR_WHITE, COLOR_BLACK);
    if (colors)
    {
        attron(COLOR_PAIR(1));
        mvaddch(0, (starShift() % Game::maxX), '*');
        colors = FALSE;
        movement++;
    }
    else
    {
        attron(COLOR_PAIR(2));
        mvaddch(0, (starShift() % Game::maxX), '.');
        colors = TRUE;
        movement++;
    }
    if (movement == 10)
    {
        attron(COLOR_PAIR(3));
        mvaddch(0, (starShift() % Game::maxX), 'O');
        movement = 0;
    }
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
