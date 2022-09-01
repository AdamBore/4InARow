#if !defined(GAMEH)
#define GAMEH

#include "Board.h"

namespace AdamBorenstein
{

class Game
{
public:
    Game(/* args */);
    ~Game();

private:
	Board gameBoard;
    
}; //end of class

} //end of namespace


#endif // GAMEH
