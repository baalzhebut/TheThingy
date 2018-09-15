#include <iostream>
using namespace std;

int menuItem;

void title() {
	cout << R"(Welcome to the...

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

int menu() {
	system("cls");
	cout << "\n\n\tWhat would you like to do?" << endl;
	cout << "\n\t\t" << 1 << ".Start" << endl;
	cout << "\t\t" << 2 << ".Read Instructions" << endl;
	cout << "\t\t" << 3 << ".Quit" << endl;
	cout << "\n\tChoose wisely..." << endl;
	cin >> menuItem;
	return menuItem;
	system("pause");
	

}
int main() {

	title();
	menu();
	

	if (menuItem == 2) {
		system("cls");
		cout << "\n\n\tRead, use your imagination and make a choice...\n" << endl;
		system("pause");
		menu();
	}

	if (menuItem == 3) {
		system("cls");
		cout << "\n\n\t\t YOU DIED" << endl;
	}

	if (menuItem != 1 && menuItem != 2 && menuItem != 3) {
		system("cls");
		cout << "\n\n\tYou have to make choices in life\n\n" << endl;
		system("pause");
		menu();
	}

	if (menuItem == 1){
		system("cls");

		cout << "\n\n\tYou wake up in a room\n\tIt is cold\n\tYou are alone...\n\n" << endl;

		system("pause");

		cout << "\n\n\tThe room is small, about " << 3 << " by " << 3 << " metres\n\n" << endl;

		system("pause");

		cout << "\n\n\tAbove the door there is a digital display \n\n\tRoom " << 9 << "\n\n" << endl;
		system("pause");
		cout <<"\n\n\tBelow the room number it says \n\n\t\"QUARENTINE IS IN EFFECT\"\n\n" << endl;

		system("pause");

	}

	return 0;

}