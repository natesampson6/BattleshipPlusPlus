#ifndef ENEMYSHIPS_H
#define ENEMYSHIPS_H

#include <vector>

struct EnemyShips {
	std::vector<int> destroyer = std::vector<int>(2);
	std::vector<int> submarine = std::vector<int>(3);
	std::vector<int> cruiser = std::vector<int>(3);
	std::vector<int> battleship = std::vector<int>(4);
	std::vector<int> carrier = std::vector<int>(5);
};

#endif
