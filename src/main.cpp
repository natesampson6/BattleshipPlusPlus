#include <iostream>

#include "board.h"

std::vector<std::vector<int> > createShips();
//void attack(int x, int y);
  
int main() 
{ 
	Board b;
	
 	b.createBoard();
 	b.showBoard();
 	
 	
 	if(b.searchForOpen(0,0)) {
 		std::cout << "Open\n";	
	}
	if(b.searchForOpen(1,4)) {
 		std::cout << "Open\n";
	}
	 
	if(b.searchForOpen(2,4)) {
 		std::cout << "Open\n";
	}
	   	
    return 0; 
} 

std::vector<std::vector<int> > createShips() {
	std::vector<std::vector<int> > shipList;
	
	return shipList;
}

