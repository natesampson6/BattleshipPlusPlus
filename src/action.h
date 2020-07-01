#ifndef ACTION_H
#define ACTION_H

#include "board.h"

#include <vector>
#include <string>

class Action {
	public:
		Action();
		void fireShot(Board b, int r, int c);
		
};

#endif
