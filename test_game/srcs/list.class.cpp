#include "list.class.hpp"

list::list( void )
{
    this->head = NULL;
    length = 0;
}

void    list::add(snake s)
{
    node    *n = new node;
    n->setSnake(s);
    n->setNext(head);
    this->head = n;
    length++;
}

snake   list::get(int n)
{
    node *temp = this->head;
    int count = 1;
    while(count != n && temp != NULL)
    {
        count++;
        temp = temp->getNext();
    }
    return temp->getSnake();
}

void    list::remove()
{
    node    *temp = this->head->getNext();
    node    *temp2 = this->head;
    while (temp->getNext() != NULL)
    {
        temp = temp->getNext()
        temp2 = temp2->getNext();
    }
    temp2->setNext(NULL);
    delete temp;
    length--;
}

void    list::display( void )
{
    int i = 0;
    node    *temp = this->head;
    while(temp != NULL)
    {
        mvaddch(10, 10+i, temp->getSnake().getCh());\
        mvprintw(20, 5, "THIS LOVE");
        refresh();
        temp = temp->getNext();
    }
}

list::~list( void )
{
    while(this->head != NULL)
    {
        node    *n = this->head;
        this->head = this->head->getNext();
        delete n;
    }
    length = 0;
}