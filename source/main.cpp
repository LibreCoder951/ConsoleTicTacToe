#include<iostream>

namespace tictactoe {
	//DE: Variablen für die Positionen auf dem Feld
	//EN: Variables for the positions on the field
	char upperLeftCorner;
	char upperRightCorner;
	char upperMiddle;
	char middleLeft;
	char middle;
	char middleRight;
	char downLeftCorner;
	char downMiddle;
	char downRightCorner;

	//DE: Welcher Spieler gerade dran ist
	//EN: Current player
	char currentPlayer;

	int xcoordInput;
	int ycoordInput;

	void gameExplanation() {
		std::cout << "Es ist Tic-tac-toe." << std::endl << std::endl;
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

	void getAndProcessInput() {
		// Fragen
		if (currentPlayer == 'X') {
			std::cout << "Kreuz, was ist deine X Koordinate?" << std::endl;
		} else {
			std::cout << "Kreis, was ist deine X Koordinate?" << std::endl;
		}
		std::cin >> xcoordInput;
		std::cout << "Und was ist deine Y Koordinate?";
		std::cin >> ycoordInput;

		// Verarbeitung
		if (xcoordInput == 0 && ycoordInput == 0) {
			if (upperLeftCorner == 'X' or upperLeftCorner == 'O') {
				std::cout << "Dieses Feld ist bereits besetzt." << std::endl;
			} else {
				if(tictactoe::currentPlayer == 'X') {
					upperLeftCorner = 'X';
					tictactoe::currentPlayer = 'O';
				} else {
					upperLeftCorner = 'O';
					tictactoe::currentPlayer = 'X';
				}
			}
		} else if (xcoordInput == 1 && ycoordInput == 0) {
			if (upperMiddle == 'X' or upperLeftCorner == 'O') {
				std::cout << "Dieses Feld ist bereits besetzt." << std::endl;
			} else {
				if(tictactoe::currentPlayer == 'X') {
					upperMiddle = 'X';
					tictactoe::currentPlayer = 'O';
				} else {
					upperMiddle = 'O';
					tictactoe::currentPlayer = 'X';
				}
			}
		} else if (xcoordInput == 2 && ycoordInput == 0) {
			if (upperRightCorner == 'X' or upperRightCorner == 'O') {
				std::cout << "Dieses Feld ist bereits besetzt." << std::endl;
			} else {
				if(tictactoe::currentPlayer == 'X') {
					upperRightCorner = 'X';
					tictactoe::currentPlayer = 'O';
				} else {
					upperRightCorner = 'O';
					tictactoe::currentPlayer = 'X';
				}
			}
		} else if (xcoordInput == 0 && ycoordInput == 1) {
			if (middleLeft == 'X' or middleLeft == 'O') {
				std::cout << "Dieses Feld ist bereits besetzt." << std::endl;
			} else {
				if(tictactoe::currentPlayer == 'X') {
					middleLeft = 'X';
					tictactoe::currentPlayer = 'O';
				} else {
					middleLeft = 'O';
					tictactoe::currentPlayer = 'X';
				}
			}
		} else if (xcoordInput == 1 && ycoordInput == 1) {
			if (middle == 'X' or middle == 'O') {
				std::cout << "Dieses Feld ist bereits besetzt." << std::endl;
			} else {
				if(tictactoe::currentPlayer == 'X') {
					middle = 'X';
					tictactoe::currentPlayer = 'O';
				} else {
					middle = 'O';
					tictactoe::currentPlayer = 'X';
				}
			}
		} else if (xcoordInput == 2 && ycoordInput == 1) {
			if (middleRight == 'X' or middleRight == 'O') {
				std::cout << "Dieses Feld ist bereits besetzt." << std::endl;
			} else {
				if(tictactoe::currentPlayer == 'X') {
					middleRight = 'X';
					tictactoe::currentPlayer = 'O';
				} else {
					middleRight = 'O';
					tictactoe::currentPlayer = 'X';
				}
			}
		} else if (xcoordInput == 0 && ycoordInput == 2) {
			if (downLeftCorner == 'X' or downLeftCorner == 'O') {
				std::cout << "Dieses Feld ist bereits besetzt." << std::endl;
			} else {
				if(tictactoe::currentPlayer == 'X') {
					downLeftCorner = 'X';
					tictactoe::currentPlayer = 'O';
				} else {
					downLeftCorner = 'O';
					tictactoe::currentPlayer = 'X';
				}
			}
		} else if (xcoordInput == 1 && ycoordInput == 2) {
			if (downMiddle == 'X' or downMiddle == 'O') {
				std::cout << "Dieses Feld ist bereits besetzt." << std::endl;
			} else {
				if(tictactoe::currentPlayer == 'X') {
					downMiddle = 'X';
					tictactoe::currentPlayer = 'O';
				} else {
					downMiddle = 'O';
					tictactoe::currentPlayer = 'X';
				}
			}
		} else if (xcoordInput == 2 && ycoordInput == 2) {
			if (downRightCorner == 'X' or downRightCorner == 'O') {
				std::cout << "Dieses Feld ist bereits besetzt." << std::endl;
			} else {
				if(tictactoe::currentPlayer == 'X') {
					downRightCorner = 'X';
					tictactoe::currentPlayer = 'O';
				} else {
					downRightCorner = 'O';
					tictactoe::currentPlayer = 'X';
				}
			}
		} else {
			std::cout << "Das ist keine gültige Position." << std::endl << "Versuch es noch einmal." << std::endl;
			tictactoe::getAndProcessInput();
		}
	}
}

int main() {
	char pauseVariable;
	tictactoe::currentPlayer = 'X';
	system("cls");
	tictactoe::gameExplanation();
	std::cout << std::endl << "Tippe eine Zahl wie 0 ein und druecke dann <ENTER> um fortzufahren.";
	std::cin >> pauseVariable;
	for (;;) {
		system("cls");
		tictactoe::drawBoard();
		tictactoe::getAndProcessInput();
	}
	return 0;
}
