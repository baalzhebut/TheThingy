#include <iostream>
#include <string>
using namespace std;

int menuChoice;

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
	cout << "\tLeft(A), Front(W), Right(D), Back(S)\n\n" << endl;
	//call user input function
	system("pause");


}
int main() {

	title();
	
	bool menu = true;

		do {
			mainMenu();
			

			switch (menuChoice) {
			case 1:
				Story();
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
		
		}while (menuChoice != 3);
	
	return 0;
}