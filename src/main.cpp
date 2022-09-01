
#include <iostream>

#include "Game.h"

using namespace std; 
using namespace AdamBorenstein; 

void PrintGreatting(); 


int main(int argc, char const *argv[])
{
	PrintGreatting();
	Game game = Game(); 
	return 0;
}

void PrintGreatting () {
	cout << "Wellcome to 4 in a row game" << endl;
}