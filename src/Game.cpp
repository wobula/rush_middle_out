#include "Game.hpp"
#include <ncurses.h>

int score, maxY, maxX;
Game::Game()
{
  score = 0;
  maxX = 0;
  maxY = 0;
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
  getmaxyx(stdscr, maxY, maxX);
  printw("window size id %d tall and %d wide", maxY, maxX);
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
