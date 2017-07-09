#ifndef GAME_HPP
#define GAME_HPP
class Game {
public:
  //! Default constructor
  Game();

  //! Copy constructor
  Game(const Game &other);

  //! Destructor
  virtual ~Game();

  //! Copy assignment operator
  Game &operator=(const Game &other);

  void launch();
  void play();

  static  int score;
  static int maxY;
  static int maxX;
  static bool debug;
 protected:
 private:
};


#endif
