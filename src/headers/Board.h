#if !defined(BOARD)
#define BOARD

namespace AdamBorenstein
{
class Board
{
public:
    Board( int width, int length );
    ~Board();

private:
    int * gameBoard; 
}; // end of class board

} // end of namespace 


#endif // BOARD.h
