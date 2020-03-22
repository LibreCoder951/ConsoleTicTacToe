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
		std::cout << "Du bist das Kreuz und musst gegen den Kreis gewinnen" << std::endl << std::endl;
	}

	void drawBoard() {
		std::cout << "Das jetzige Spielfeld: " << std::endl;
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
		// Fragen
		std::cout << "Kreuz, was ist deine X Koordinate?";
		std::cin >> xcoordInput;
		std::cout << "Und was ist deine Y Koordinate?";
		std::cin >> ycoordInput;

		// Verarbeitung
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
			std::cout << "Das ist keine gültige Position." << std::endl << "Versuch es noch einmal." << std::endl;
			tictactoe::getAndProcessXINput();
		}
	}
	void getAndProcessOINput() {
		// Fragen
		std::cout << "Kreis, was ist deine X Koordinate?";
		std::cin >> xcoordInput;
		std::cout << "Und was ist deine Y Koordinate?";
		std::cin >> ycoordInput;

		// Verarbeitung
		if (xcoordInput == 0 && ycoordInput == 0) {
			upperLeftCorner = 'O';
		} else if (xcoordInput == 1 && ycoordInput == 0) {
			upperMiddle = 'O';
		} else if (xcoordInput == 2 && ycoordInput == 0) {
			upperRightCorner = 'O';
		} else if (xcoordInput == 0 && ycoordInput == 1) {
			middleLeft = 'O';
		} else if (xcoordInput == 1 && ycoordInput == 1) {
			middle = 'O';
		} else if (xcoordInput == 2 && ycoordInput == 1) {
			middleRight = 'O';
		} else if (xcoordInput == 0 && ycoordInput == 2) {
			downLeftCorner = 'O';
		} else if (xcoordInput == 1 && ycoordInput == 2) {
			downMiddle = 'O';
		} else if (xcoordInput == 2 && ycoordInput == 2) {
			downRightCorner = 'O';
		} else {
			std::cout << "Das ist keine gültige Position." << std::endl << "Versuch es noch einmal." << std::endl;
			tictactoe::getAndProcessXINput();
		}
	}
}

int main() {
	tictactoe::gameExplanation();
	std::cin;
	for (;;) {
		system("cls");
		tictactoe::drawBoard();
		tictactoe::getAndProcessXINput();
		system("cls");
		tictactoe::drawBoard();
		tictactoe::getAndProcessOINput();
	}
	return 0;
}
