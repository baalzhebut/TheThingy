#include <iostream>
#include <string>
#include <conio.h>
using namespace std;


int menuChoice;
int PlayerX = 1;
int PlayerY = 1;

string map[3][3] =
{
{ "\t|ROOM 1|", "\t|ROOM 2|", "\t|ROOM 3|" },
{ "\t|ROOM 4|", "\t|ROOM 5|", "\t|ROOM 6|" },
{ "\t|ROOM 6|", "\t|ROOM 8|", "\t|ROOM 9|" }

};
string currentRoom = "\t|ROOM 1|";
void drawMap() {
	system("cls");
	cout << "\nMAP\n" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << map[i][j];
		}
		cout << "\n" << endl;
		cout << endl;
	}

	cout << "\nUse WASD to move and Q to Quit\n" << endl;
}
void title() {
	cout << R"(Welcome to ...
_________          _______   _________         _________ _        _______          
\__   __/|\     /|(  ____ \  \__   __/|\     /|\__   __/( (    /|(  ____ \|\     /|
   ) (   | )   ( || (    \/     ) (   | )   ( |   ) (   |  \  ( || (    \/( \   / )
   | |   | (___) || (__         | |   | (___) |   | |   |   \ | || |       \ (_) / 
   | |   |  ___  ||  __)        | |   |  ___  |   | |   | (\ \) || | ____   \   /  
   | |   | (   ) || (           | |   | (   ) |   | |   | | \   || | \_  )   ) (   
   | |   | )   ( || (____/\     | |   | )   ( |___) (___| )  \  || (___) |   | |   
   )_(   |/     \|(_______/     )_(   |/     \|\_______/|/    )_)(_______)   \_/   
                                                                                   
	)" << endl;

	system("pause");
	system("cls");
}

int mainMenu() {
	system("cls");
	cout << "\n\n\tWhat would you like to do?" << endl;
	cout << "\n\t\t" << 1 << ".Start" << endl;
	cout << "\t\t" << 2 << ".Read Instructions" << endl;
	cout << "\t\t" << 3 << ".Quit" << endl;
	cout << "\n\tChoose wisely..." << endl;
	cin >> menuChoice;
	return menuChoice;
	system("pause");
}

void Story() {

	system("cls");

	cout << "\n\n\tYou wake up in a room\n\tIt is cold\n\tYou are alone...\n\n" << endl;

	system("pause");

	system("cls");
	cout << "\n\n\tThe room is small, about " << 3 << " by " << 3 << " metres\n\n" << endl;
	system("pause");

	system("cls");
	cout << "\n\n\tEvery wall has a door that looks exactly the same\n\n" << endl;
	system("pause");

	system("cls");
	cout << "\n\n\tAbove each door there is a digital display \n\n\tRoom " << 5 << "\n\n" << endl;
	system("pause");

	system("cls");
	cout << "\n\n\tBelow the room number it says \n\n\t\"QUARENTINE IS IN EFFECT\"\n\n" << endl;
	system("pause");

	system("cls");
	cout << "\n\n\tWhich door will you open?\n\n" << endl;
	//cout << "\tLeft, Front, Right(D), Back(S)\n\n" << endl;



}
int movement() {

	system("cls");
	cout << "\nThis is the map\n" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << map[i][j];
		}
		cout << "\n" << endl;
		cout << endl;
	}
	cout << "\n" << endl;
	system("pause");


	map[PlayerY][PlayerX] = { "\t|PLAYER|" };
	system("cls");
	cout << "\nThis is where you are\n" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << map[i][j];
		}
		cout << "\n" << endl;
		cout << endl;
	}

	cout << "\n" << endl;
	cout << "\nUse WASD to move and Q to Quit\n" << endl;


	char ch = 0;

	do
	{

		ch = _getch();
		switch (ch)
		{
		case 'w':
			map[PlayerY][PlayerX] = currentRoom;
			if (PlayerY > 0) {
				PlayerY = PlayerY - 1;
			}
			currentRoom = map[PlayerY][PlayerX];
			map[PlayerY][PlayerX] = { "\t|PLAYER|" };
			drawMap();
			break;
		case 'a':
			map[PlayerY][PlayerX] = currentRoom;
			if (PlayerX > 0) {
				PlayerX = PlayerX - 1;
			}
			currentRoom = map[PlayerY][PlayerX];
			map[PlayerY][PlayerX] = { "\t|PLAYER|" };
			drawMap();
			break;
		case 's':
			map[PlayerY][PlayerX] = currentRoom;
			if (PlayerY < 2) {
				PlayerY = PlayerY + 1;
			}
			currentRoom = map[PlayerY][PlayerX];
			map[PlayerY][PlayerX] = { "\t|PLAYER|" };
			drawMap();
			break;
		case 'd':
			map[PlayerY][PlayerX] = currentRoom;
			if (PlayerX < 2) {
				PlayerX = PlayerX + 1;
			}
			currentRoom = map[PlayerY][PlayerX];
			map[PlayerY][PlayerX] = { "\t|PLAYER|" };
			drawMap();
			break;

		}

	} while (ch != 'Q' && ch != 'q');

	return 0;


}

int main() {

	title();

	bool menu = true;

	do {
		mainMenu();


		switch (menuChoice) {
		case 1:
			Story();
			movement();
			break;

		case 2:
			system("cls");
			cout << "\n\n\tRead, use your imagination and make a choice...\n" << endl;
			system("pause");
			break;

		case 3:
			system("cls");
			cout << "Dead quitter!" << endl;
			system("pause");
			break;

		default:
			system("cls");
			cout << "We all need to make certain choices in life!" << endl;
			system("pause");
		}

	} while (menuChoice != 3);

	return 0;
}