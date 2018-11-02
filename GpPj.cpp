#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

class chess {
	public: 
	private:
};

int numPlayers = 2;
int numHumanPlayers = 1;

void welcomeMsg() {

	cout << "Welcome" << endl;
}

void startGame() {
	char board[11][11] = {};

	for (int i = 0; i < 11; i++) {

		for (int j = 0; j < 11; j++) {
			if (i == 0 || i == 10 || j == 0 || j == 10) {
				board[i][j] = '.';
			}
			else if (i == j) {
				board[i][j] = '.';
			}
			else {
				board[i][j] = ' ';
				board[5][5] = 'X';
			}
			board[i][10 - i] = '.';
		}
	}

	for (int i = 0; i < 11; i++) {
		for (int j = 0; j < 11; j++) {
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
}

void settings() {
	int choice;
	do {
		cout << "*** Settings Menu ***" << endl;
		cout << "[1] Number of Players" << endl;
		cout << "[2] Number of human players" << endl;
		cout << "[3] Return to Game Menu" << endl;
		cout << "*********************" << endl;
		cin >> choice;
		char ans;
		system("cls");
		switch (choice) {

		case 1: cout << "There are " << numPlayers << " player(s) now, do you want to change it? (Y/N)";
			cin >> ans;
			if ( ans == 'Y' || ans == 'y') {
				cout << "Input the number of players now: ";
				int num1;
				cin >> num1;
				numPlayers = num1;
				cout << "The number of players now is " << numPlayers << endl;
				cin.ignore();
			}break;
		case 2: cout << "There are " << numHumanPlayers << " human player(s) now, do you want to change it? (Y/N)";
			cin >> ans;
			if (ans == 'Y' || ans == 'y') {
				cout << "Input the number of human players now: ";
				int num2;
				cin >> num2;
				numHumanPlayers = num2;
				cout << "The number of human players now is " << numHumanPlayers << endl;
				cin.ignore();
			}break;
		case 3:return;
		default: cout << "Invalid input, please try again!" << endl; break;
		}
	} while (choice != 0);

}
void gameDemo() {

}

void instructions() {

}

void credits() {
	cout << "Student Name" << setw(18) << "Student ID" << setw(10) << "Class" << setw(15) << "Tuto. Group" << endl;
	cout << "Sarki Joshan" << setw(17) << "16098910A" << setw(10) << "104" << setw(6) << "D" << endl;
	cout << "Lui Teng Yuen" << setw(17) << "17143494A" << setw(10) << "104" << setw(6) << "D" << endl;



}

void exit() {
	char choice;

	do {

		cout << "Do you want to exit? (Y/N) : ";
		cin >> choice;

		if (choice == 'Y' || choice == 'y') {
			break;
		}
		else if (choice == 'N' || choice == 'n') {
			return;
		}
		else if (choice != 'Y' || choice != 'y' || choice != 'N' || choice != 'n') {
			cout << "Invalid Input, please try again" << endl;
		}
	} while (choice != 'Y' || choice != 'y' || choice != 'N' || choice != 'n');
	system("cls");

}

int main() {

	int option;

	welcomeMsg();

	do {
		cout << "*** Game Menu ***" << endl;
		cout << "[1] Start Game" << endl;
		cout << "[2] Settings" << endl;
		cout << "[3] Game Demo" << endl;
		cout << "[4] Instruction" << endl;
		cout << "[5] Credits" << endl;
		cout << "[6] Exit" << endl;
		cout << "*****************" << endl;
		cout << "Option (1 - 6): ";
		cin >> option;

		switch (option) {
		case 1: startGame(); break;
		case 2: settings(); break;
		case 3: gameDemo(); break;
		case 4: instructions(); break;
		case 5: credits(); break;
		case 6: exit(); break;
		default: cout << "Invalid input, please try again" << endl;
		}

	} while (option != 0);


	return 0;
}
