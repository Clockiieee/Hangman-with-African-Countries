/*Discover Africa Code
	by: sockeii*/
#include <iostream>
#include <fstream>
#include <string>
#include "Africa_Game.h"

using namespace std;

void Gameplay(struct PLAYER N); //function prototying

struct PLAYER{
	char player[100];
};


int main(){
/*-------------------------------------------START UP AND RULES------------------------------------------*/
	GameRules(); //prints game rules
	system("pause"); //pause screen
	system("CLS"); //clear screen

/*---------------------------------------------PLAYER's DECISION-----------------------------------------*/
	//Declare variables
	char a;
	struct PLAYER P;

	//Asks the player if they want to play
	GameDecision(a);
	    cin.getline(P.player, 100, '.');
		Gameplay(P);
	/*cout << "Do you want to play? If YES, enter 'Y' otherwise enter 'N'." << endl;
	cin >> a; //player's input

	if (a == 'Y' || a == 'y'){
		cout << "Enter PLAYER's NAME and finish with a '.': ";
		cin.getline(P.player, 100, '.');
		Gameplay(P);

	}
		
		else if (a == 'N' || a == 'n'){
			cout << "See you again :)" << endl;
			
		}

		else{
			cout << "GAME FAILED ERROR! Reload Game." << endl;

		}*/

		system("pause");
		return 0;
	}

void Gameplay(struct PLAYER N){

	system("pause"); //pauses screen
	system("CLS"); //clear screen
	cout << "----WELCOME TO DISCOVER AFRICA----\n";
	cout << "PLAYER's NAME: " << N.player <<'\n' << endl;
	GameOptions();
	GamePuzzle();
}
