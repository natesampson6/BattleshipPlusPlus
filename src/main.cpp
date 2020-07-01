#include <iostream>

#include "board.h"
#include "action.h"
#include "enemyships.h"
  
int main() 
{ 
	Board b;
	Action a;
	struct EnemyShips enemy;
	
	// Game Setup
 	b.createBoard();
	// TODO: iterate over EnemyShips struct and randomly generate ships based on their vector's size
 	
 	b.showBoard();
	   	
    return 0; 
} 

