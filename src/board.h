#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include <string>

class Board {
	private:
		std::vector<std::vector<std::string> > gameBoard;
	public:
		Board();
		void setBoard(std::vector<std::vector<std::string> > gameBoard);
		std::vector<std::vector<std::string> > getBoard();
		void createBoard();
		void showBoard();
		bool searchForOpen(int r, int c);
};

#endif
