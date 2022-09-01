
#include <iostream>

#include "Board.h"

using namespace std; 
using namespace AdamBorenstein; 

void PrintGreatting(); 


int main(int argc, char const *argv[])
{
	PrintGreatting();
	Board gameBoard = Board(); 
	return 0;
}

void PrintGreatting () {
	cout << "Wellcome to 4 in a row game" << endl;
}