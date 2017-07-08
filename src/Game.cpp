#include "Game.hpp"
#include <ncurses.h>

int score, maxY, maxX;
Game::Game()
{
};

Game::Game(const Game &other)
{
  *this = other;
};

Game::~Game()
{
};

Game& Game::operator=(const Game &rhs)
{
  // Check for self-assignment!
  if (this == &rhs)
    return *this;

  return *this;
}

void Game::launch()
{
  initscr();
  cbreak();
  noecho();
  keypad(stdscr, TRUE);
  play();
  endwin();
};
void Game::play()
{
  int ch = 0;
  timeout(50);
  while ((ch = getch()) != 'q')
    {
      if (ch != ERR)
        addch(ch);
      refresh();
      ch = 0;
    }
};
