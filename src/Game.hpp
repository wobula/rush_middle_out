class Game {
 public:
  static  int score, maxY, maxX;
  static bool debug;
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

 protected:
 private:
};
