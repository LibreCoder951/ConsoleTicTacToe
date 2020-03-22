#include<iostream>

namespace tictactoe {
	// Variables for the positions on the field
	char upperLeftCorner;
	char upperRightCorner;
	char upperMiddle;
	char middleLeft;
	char middle;
	char middleRight;
	char downLeftCorner;
	char downMiddle;
	char downRightCorner;

	int xcoordInput;
	int ycoordInput;

	void gameExplanation() {
		std::cout << "You're the \"X\" and you must win against the \"O\" in a game of tic-tac-toe." << std::endl << std::endl;
	}

	void drawBoard() {
		std::cout << "Current board: " << std::endl;
		std::cout << "    0   1   2" << std::endl;
		std::cout << "  -------------" << std::endl;
		std::cout << "0 | " << upperLeftCorner << " | " << upperMiddle << " | " << upperRightCorner << " |" << std::endl;
		std::cout << "  |-----------|" << std::endl;
		std::cout << "1 | " << middleLeft << " | " << middle << " | " << middleRight << " |" << std::endl;
		std::cout << "  |-----------|" << std::endl;
		std::cout << "2 | " << downLeftCorner << " | " << downMiddle << " | " << downRightCorner << " |" << std::endl;
		std::cout << "  -------------" << std::endl;
	}

	void getAndProcessXINput() {
		// Get the input
		std::cout << "X, what should be your X coordinate?";
		std::cin >> xcoordInput;
		std::cout << "What should be your Y coordinate?";
		std::cin >> ycoordInput;

		// Process it
		if (xcoordInput == 0 && ycoordInput == 0) {
			upperLeftCorner = 'X';
		} else if (xcoordInput == 1 && ycoordInput == 0) {
			upperMiddle = 'X';
		} else if (xcoordInput == 2 && ycoordInput == 0) {
			upperRightCorner = 'X';
		} else if (xcoordInput == 0 && ycoordInput == 1) {
			middleLeft = 'X';
		} else if (xcoordInput == 1 && ycoordInput == 1) {
			middle = 'X';
		} else if (xcoordInput == 2 && ycoordInput == 1) {
			middleRight = 'X';
		} else if (xcoordInput == 0 && ycoordInput == 2) {
			downLeftCorner = 'X';
		} else if (xcoordInput == 1 && ycoordInput == 2) {
			downMiddle = 'X';
		} else if (xcoordInput == 2 && ycoordInput == 2) {
			downRightCorner = 'X';
		} else {
			std::cout << "That is not a valid position." << std::endl << "Try again." << std::endl;
			tictactoe::getAndProcessXINput();
		}
	}
}

void printLicenseInfo() {
	std::cout << "CLI-TTT  Copyright (C) 2020  LibreCoder951" << std::endl;
	std::cout << "This program comes with ABSOLUTELY NO WARRANTY; for details type `show w'." << std::endl;
	std::cout << "This is free software, and you are welcome to redistribute it" << std::endl;
	std::cout << "under certain conditions; type `show c' for details." << std::endl << std::endl << std::endl;
}

int main() {
	printLicenseInfo();
	tictactoe::gameExplanation();
	std::cin;
	for (;;) {
		system("cls");
		tictactoe::drawBoard();
		tictactoe::getAndProcessXINput();
	}
	return 0;
}
