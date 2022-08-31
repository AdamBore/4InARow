
#include <iostream>

#include <"board.h">

using namespace std; 

void PrintGreatting(); 

int main(int argc, char const *argv[])
{
	PrintGreatting();
	CreateBoard(7);
	return 0;
}

void PrintGreatting () {
	cout << "Wellcome to 4 in a row game" << endl;
}