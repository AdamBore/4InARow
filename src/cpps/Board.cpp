#include "Board.h"

namespace AdamBorenstein
{

Board::Board( int width, int length ){
    gameBoard = new int[ ( width + 1 ) * ( length + 1 )]; // + 1 to allow for headers to be added
}

Board::~Board(){
    delete gameBoard; 
}

}