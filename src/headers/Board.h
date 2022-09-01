#if !defined(BOARD)
#define BOARD

namespace AdamBorenstein
{
class Board
{
public:
    Board( int width = 7, int length = 7 );

private:
    int * gameBoard; 
}; // end of class board

} // end of namespace 


#endif // BOARD.h
