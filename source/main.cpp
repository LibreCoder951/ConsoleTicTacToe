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
			if (upperLeftCorner == 'X' or upperLeftCorner == 'O') {
				std::cout << "Dieses Feld ist bereits besetzt." << std::endl;
				std::cin;
			} else {
				upperLeftCorner = 'X';
			}
		} else if (xcoordInput == 1 && ycoordInput == 0) {
			if (upperMiddle == 'X' or upperLeftCorner == 'O') {
				std::cout << "Dieses Feld ist bereits besetzt." << std::endl;
				std::cin;
			} else {
				upperMiddle = 'X';
			}
		} else if (xcoordInput == 2 && ycoordInput == 0) {
			if (upperRightCorner == 'X' or upperRightCorner == 'O') {
				std::cout << "Dieses Feld ist bereits besetzt." << std::endl;
				std::cin;
			} else {
				upperRightCorner = 'X';
			}
		} else if (xcoordInput == 0 && ycoordInput == 1) {
			if (middleLeft == 'X' or middleLeft == 'O') {
				std::cout << "Dieses Feld ist bereits besetzt." << std::endl;
				std::cin;
			} else {
				middleLeft = 'X';
			}
		} else if (xcoordInput == 1 && ycoordInput == 1) {
			if (middle == 'X' or middle == 'O') {
				std::cout << "Dieses Feld ist bereits besetzt." << std::endl;
				std::cin;
			} else {
				middle = 'X';
			}
		} else if (xcoordInput == 2 && ycoordInput == 1) {
			if (middleRight == 'X' or middleRight == 'O') {
				std::cout << "Dieses Feld ist bereits besetzt." << std::endl;
				std::cin;
			} else {
				middleRight = 'X';
			}
		} else if (xcoordInput == 0 && ycoordInput == 2) {
			if (downLeftCorner == 'X' or downLeftCorner == 'O') {
				std::cout << "Dieses Feld ist bereits besetzt." << std::endl;
				std::cin;
			} else {
				downLeftCorner = 'X';
			}
		} else if (xcoordInput == 1 && ycoordInput == 2) {
			if (downMiddle == 'X' or downMiddle == 'O') {
				std::cout << "Dieses Feld ist bereits besetzt." << std::endl;
				std::cin;
			} else {
				downMiddle = 'X';
			}
		} else if (xcoordInput == 2 && ycoordInput == 2) {
			if (downRightCorner == 'X' or downRightCorner == 'O') {
				std::cout << "Dieses Feld ist bereits besetzt." << std::endl;
				std::cin;
			} else {
				downRightCorner == 'X';
			}
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
			if (upperLeftCorner == 'X' or upperLeftCorner == 'O') {
				std::cout << "Dieses Feld ist bereits besetzt." << std::endl;
				std::cin;
			} else {
				upperLeftCorner = 'O';
			}
		} else if (xcoordInput == 1 && ycoordInput == 0) {
			if (upperMiddle == 'X' or upperLeftCorner == 'O') {
				std::cout << "Dieses Feld ist bereits besetzt." << std::endl;
				std::cin;
			} else {
				upperMiddle = 'O';
			}
		} else if (xcoordInput == 2 && ycoordInput == 0) {
			if (upperRightCorner == 'X' or upperRightCorner == 'O') {
				std::cout << "Dieses Feld ist bereits besetzt." << std::endl;
				std::cin;
			} else {
				upperRightCorner = 'O';
			}
		} else if (xcoordInput == 0 && ycoordInput == 1) {
			if (middleLeft == 'X' or middleLeft == 'O') {
				std::cout << "Dieses Feld ist bereits besetzt." << std::endl;
				std::cin;
			} else {
				middleLeft = 'O';
			}
		} else if (xcoordInput == 1 && ycoordInput == 1) {
			if (middle == 'X' or middle == 'O') {
				std::cout << "Dieses Feld ist bereits besetzt." << std::endl;
				std::cin;
			} else {
				middle = 'O';
			}
		} else if (xcoordInput == 2 && ycoordInput == 1) {
			if (middleRight == 'X' or middleRight == 'O') {
				std::cout << "Dieses Feld ist bereits besetzt." << std::endl;
				std::cin;
			} else {
				middleRight = 'O';
			}
		} else if (xcoordInput == 0 && ycoordInput == 2) {
			if (downLeftCorner == 'X' or downLeftCorner == 'O') {
				std::cout << "Dieses Feld ist bereits besetzt." << std::endl;
				std::cin;
			} else {
				downLeftCorner = 'O';
			}
		} else if (xcoordInput == 1 && ycoordInput == 2) {
			if (downMiddle == 'O' or downMiddle == 'O') {
				std::cout << "Dieses Feld ist bereits besetzt." << std::endl;
				std::cin;
			} else {
				downMiddle = 'O';
			}
		} else if (xcoordInput == 2 && ycoordInput == 2) {
			if (downRightCorner == 'X' or downRightCorner == 'O') {
				std::cout << "Dieses Feld ist bereits besetzt." << std::endl;
				std::cin;
			} else {
				downRightCorner == 'O';
			}
		} else {
			std::cout << "Das ist keine gültige Position." << std::endl << "Versuch es noch einmal." << std::endl;
			tictactoe::getAndProcessOINput();
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
