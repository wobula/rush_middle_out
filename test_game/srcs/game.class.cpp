#include "game.class.hpp"

int score, max_y, max_x, food_x, food_y, direction;
list l;
game::game()
{
        score= max_y= max_x= food_x= food_y= 0;
        direction= 2;
}

void game::launch()
{
    initscr();                      //initialize ncurses
    cbreak();                       //no line buffering
    curs_set(FALSE);
    keypad(stdscr, TRUE);
    noecho();
    refresh();
    attron(A_BOLD);
    mvprintw(LINES/2-2, COLS/2-10, "SNAKES WELCOMES YOU");
    mvprintw(LINES/2, COLS/2-12, "PRESS ENTER TO CONTINUE");
    int ch;
    if((ch= getch())==10)
    {
        getmaxyx(stdscr, max_y, max_x);
        play();
    }
    else 
    {
        clear();
        mvprintw(LINES/2, COLS/2- 16, "YOU DID NOT EVEN GIVE ME A CHANCE......GOODBYE");
        refresh();
        sleep(2);
    }
    attroff(A_BOLD);
    endwin();
}

void game::genFood()
{
    srand(time(NULL));
    food_y= random()%(max_y-6)+4;
    food_x= random()%(max_x-4)+2;
}

void game::map()
{
    box(stdscr, 0, 0);
    mvprintw(1,1, "SCORE: ");
    mvprintw(1,8, "%d",score);      
    mvprintw(2,1, "Press q to quit");
    refresh();
}

void game::setSnake()
{
    clear();
    map();
    for(int i= 0; i< 8; i++)
    {
        snake s((COLS/2)-8+i, LINES/2);
        l.add(s);
        mvprintw(s.getY(),s.getX(),"%c",s.getCh());
    }
    mvprintw(food_y, food_x, "F");
    refresh();
}

void game::play()
{
    bool b;
    genFood();
    setSnake();
    mvprintw(8, COLS/2-20, "??????????READY??????????????");
    refresh();
    sleep(1);
    int ch= 0;
    timeout(50);                            //adjust speed of the game
    while((ch=getch())!= 'q')
    {
        switch(ch)
        {
            case KEY_UP: direction= 1; 
                        break;
            case KEY_DOWN: direction= 3;
                        break;
            case KEY_RIGHT: direction= 2;
                        break;
            case KEY_LEFT: direction= 4;
                        break;
        }
       clear();
       map();
       mvprintw(food_y, food_x,"F");
       moveSnake(direction);
       refresh();
       b= check();
       if(!b)
       {
            clear();
            mvprintw(max_y/2-2, max_x/2-8, "GAME OVER");
            mvprintw(max_y/2, max_x/2-10, "YOUR SCORE %d",score);
            refresh();
            sleep(2);
            break;
        }
    }
}

bool game::check()
{
    bool b= false;
    snake s= l.get(1);
    int head_x= s.getX();
    int head_y= s.getY();
    if(head_x== max_x-1 || head_y== 1 || head_x== 1 || head_y== max_y-1)
        return false;
    else 
    {
        int len= l.listLength();
        for(int i= 4; i< len; i++)
        {
            s= l.get(i);
            if(head_x== s.getX() && head_y== s.getY())
            {
                b= true;
                break;
            }
        }
        if(b)
            return false;
        else
            return true;
    }  
}

void game::moveSnake(int dir)
{
    snake k;
    k= l.get(1);
    int x= k.getX(), y= k.getY();
    //mvprintw(6,1, "BEFORE x= %d, y= %d, dir=%d",x,y,dir);
    if(dir== 1) y--;
    else if(dir== 2)    x++;
    else if(dir== 3)    y++;
    else x--;
    //mvprintw(7,1, "AFTER x=%d, y= %d", x, y);
    snake s(x,y);
    l.add(s);
    if(x==food_x && y==food_y)
    {
        score++;
        genFood();
        mvprintw(food_y, food_x, "F");
    }
    else
        l.remove();
    int len= l.listLength();
    for(int i= 1; i<= len; i++)
    {
        k= l.get(i);
        mvaddch(k.getY(), k.getX(), k.getCh());
        refresh();
    }
}