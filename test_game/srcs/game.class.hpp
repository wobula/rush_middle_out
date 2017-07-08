#include "list.class.hpp"

class   game
{
    public:
            game( void );
            void launch();
            void play();
            void map();
            void genFood();
            void setSnake();
            void moveSnake(int dir);
            bool check();
};