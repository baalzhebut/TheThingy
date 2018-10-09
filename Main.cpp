#include <iostream>
#include <string>

using namespace std;

char seating[10][5] = { 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A',
						'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A',
						'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A',
						'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A',
						'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A'

};
//char seating[10][5] = { "A" };
char row = 0;
char seat = 0;

int main() {

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 5; j++) {
			cout << seating[i][j];
		}
		cout << endl;
	}
	system("pause");

	cout << "On which row would you like to seat?" << endl;
	cout << "\nPlease select a row between 0 and 4" << endl;
	

	cin >> row;

	cout << "\tRow " << row << endl;

	cout << "\nOn which seat of row " << row << " would you like to seat?" << endl;
	cout << "\nPlease select a seat between 0 and 9" << endl;
	cin >> seat;

	cout << "\n\tYou have chosen Row " << row << " and Seat " << seat << endl;

	system("pause");

	seating[row][seat] = 0;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 5; j++) {
			cout << seating[i][j];
		}
		cout << endl;
	}

	system("pause");

}