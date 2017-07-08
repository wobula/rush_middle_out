#include "snake.class.hpp"



snake::snake()
{
    x = 0;
    y = 0;
    ch = 'O';
}

snake::snake(int a, int b)
{
    x = a;
    y = b;
    ch = '0';
}

snake::snake(const snake &ekans)
{
    ch = ekans.ch;
    x = ekans.x;
    y = ekan.y;
}

void setCh(char x)
{
    ch = x;
}

char    getCh( void )
{
    return ch;
}

int     getX( void )
{
    return x;
}

void    setX(int no)
{
    x = no;
}

int     getY()
{
    return y;
}

void    setY(int no)
{
    y = no;
}