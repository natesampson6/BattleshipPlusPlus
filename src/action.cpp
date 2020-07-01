#include "action.h"
#include "board.h"

#include <vector>
#include <string>
#include <iostream>

Action::Action() {}

void Action::fireShot(Board b, int r, int c) {
	if (b.searchForOpen(r, c)) {
		// TODO: add another conditional to check if a ship is at this spot too
		std::cout << "This spot was open.\n";
		b.changeBoard(r, c);
	}
}
