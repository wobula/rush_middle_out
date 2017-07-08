#include "snake.class.hpp"

class   list    //stores snake body
{
        public:
        list( void );
        void    add(snake s);
        int     listLength( void );
        snake   get(int n);
        void    remove( void );
        void    display( void );
        ~list( void );

        private:
                node    *_head;
                int     _length;
};