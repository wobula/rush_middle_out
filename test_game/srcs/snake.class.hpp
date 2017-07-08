#include<ncurses.h>
#include<unistd.h>
#include<time.h>
#include<stdlib.h>

class snake
{
    public:
            snake( void );
            snake(int a, int b);
            snake(const snake &ekans);
            void    setCh(char x);
            char    getCh( void );
            int     getX();
            void    setX(int no);
            int     getY( void );
            void    setY(int no);
            ~snake( void );

            int x;
            int y;
            char ch;
};