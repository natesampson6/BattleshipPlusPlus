#include "board.h"

#include <vector> 
#include <string>
#include <iostream>

std::vector<std::vector<std::string> > masterGameBoard;

Board::Board() {}

void Board::setBoard(std::vector<std::vector<std::string> > gameBoard) {
	masterGameBoard = gameBoard;
}

std::vector<std::vector<std::string> > Board::getBoard() {
	if (masterGameBoard.size() == 0) {
		createBoard();
		return masterGameBoard;
	}
}

void Board::createBoard() {
	std::vector<std::vector<std::string> > board = {
		{"O", "O", "O", "O", "O", "O", "O", "O", "O", "O"},
		{"O", "O", "O", "O", "O", "O", "O", "O", "O", "O"},
		{"O", "O", "O", "O", "O", "O", "O", "O", "O", "O"},
		{"O", "O", "O", "O", "O", "O", "O", "O", "O", "O"},
		{"O", "O", "O", "O", "O", "O", "O", "O", "O", "O"},
		{"O", "O", "O", "O", "O", "O", "O", "O", "O", "O"},
		{"O", "O", "O", "O", "O", "O", "O", "O", "O", "O"},
		{"O", "O", "O", "O", "O", "O", "O", "O", "O", "O"},
		{"O", "O", "O", "O", "O", "O", "O", "O", "O", "O"},
		{"O", "O", "O", "O", "O", "O", "O", "O", "O", "O"},
	};
	
	setBoard(board);
}

void Board::showBoard() {
	for (int r = 0; r < masterGameBoard.size(); r++) {
		for (int c = 0; c < masterGameBoard[r].size(); c++) {
			std::cout << masterGameBoard[r][c] << " ";
		}
		std::cout << std::endl;
	}
	
	std::cout << "\n";
}

void Board::changeBoard(int r, int c) {
	masterGameBoard[r][c] = "X";
}

bool Board::searchForOpen(int r, int c) {
	if (masterGameBoard[r][c] == "O") {
		return true;
	}
	if (masterGameBoard[r][c] == "M" || masterGameBoard[r][c] == "X") {
		if (masterGameBoard[r][c] == "M") {
			std::cout << "You've aimed for this zone before, and missed." << std::endl;
		} else {
			std::cout << "You've aimed for this zone before, and hit!" << std::endl;
		}
	}
	return false;
}

