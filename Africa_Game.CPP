#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "Africa_Game.h"

using namespace std;
//define functions


void GameRules(){
	cout << "-------------------------------------------------READY TO DISCOVER AFRICA----------------------------------------------" << endl;
	cout << "| RULES TO THE GAME                                                                                                   |" << endl;
	cout << "|  1. You will be ask to enter your name                                                                              |" << endl;
	cout << "|  2. The game will present to you, underscore space where each underscore respesents a letter for an African country |" << endl;
	cout << "|  3. You will have the choice to guess the country, choose a letter or request a hint                                |" << endl;
	cout << "|   + If a hint is requested then, there is an instant penalty ;(                                                     |" << endl;
	cout << "|   + If the letter guessed is present then, there is no penalty :)                                                   |" << endl;
	cout << "|   + However, if the letter is not present then, there is penalty :( but you are allowed to guess again :D           |" << endl;
	cout << "|  4. HAVE FUN!!!                                                                                                     |" << endl;
	cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
}

void GameOptions(){
	cout << "------------------GAME OPTIONS-------------------" << endl;
	cout << "| ENTER:                                        |" << endl;
	cout << "|  1. To enter guess the country's name         |" << endl;
	cout << "|  2. To choose a letter of the country's name  |" << endl;
	cout << "|  3. Request a hint                            |" << endl;
	cout << "|  0. To exit option                            |" << endl;
	cout << "-------------------------------------------------" << endl;
}

void GamePuzzle(){
     	ofstream MyWriteFile("africa.txt");

	//African Countries
	MyWriteFile << "Algeria\n";
	MyWriteFile << "Angola\n";
	MyWriteFile << "Benin\n";
	MyWriteFile << "Botswana\n";
	MyWriteFile << "Burkina Faso\n";
	MyWriteFile << "Burundi\n";
	MyWriteFile << "Cameroon\n";
	MyWriteFile << "Cape Verde\n";
	MyWriteFile << "Central African Republic\n";
	MyWriteFile << "Chad\n";
	MyWriteFile << "Comoros\n";
	MyWriteFile << "Dijibouti\n";
	MyWriteFile << "Democratice Republic of Congo\n";
	MyWriteFile << "Egypt\n";
	MyWriteFile << "Equatorial Guienea\n";
	MyWriteFile << "Eritrea\n";
	MyWriteFile << "Eswantini\n";
	MyWriteFile << "Ethiopia\n";
	MyWriteFile << "Gabon\n";
	MyWriteFile << "The Gambia\n";
	MyWriteFile << "Ghana\n";
	MyWriteFile << "Guinea\n";
	MyWriteFile << "Guinea-Bissau\n";
	MyWriteFile << "Ivory Coast\n";
	MyWriteFile << "Kenya\n";
	MyWriteFile << "Lesotho\n";
	MyWriteFile << "Liberia\n";
	MyWriteFile << "Libya\n";
	MyWriteFile << "Madagascar\n";
	MyWriteFile << "Malawi\n";
	MyWriteFile << "Mali\n";
	MyWriteFile << "Mauritania\n";
	MyWriteFile << "Mauritius\n";
	MyWriteFile << "Morocco\n";
	MyWriteFile << "Mozambique\n";
	MyWriteFile << "Namibia\n";
	MyWriteFile << "Niger\n";
	MyWriteFile << "Nigeria\n";
	MyWriteFile << "Republic of the Congo\n";
	MyWriteFile << "Rwanda\n";
	MyWriteFile << "Sao Tome and Principe\n";
	MyWriteFile << "Senegal\n";
	MyWriteFile << "Seychelles\n";
	MyWriteFile << "Sierra Leone\n";
	MyWriteFile << "Somalia\n";
	MyWriteFile << "South Africa\n";
	MyWriteFile << "South Sudan\n";
	MyWriteFile << "Sudan\n";
	MyWriteFile << "Tanzania\n";
	MyWriteFile << "Togo\n";
	MyWriteFile << "Tunisia\n";
	MyWriteFile << "Uganda\n";
	MyWriteFile << "Zambia\n";
	MyWriteFile << "Zimbabwe\n";

	MyWriteFile.close();

    string A[54];
    string Africa;
    int i = 0;
    int a = 0;
    
    ifstream MyReadFile ("africa.txt");

  if (MyReadFile.is_open ())
    {
      while (!MyReadFile.eof ())
	{
	  getline (MyReadFile, Africa);
	  A[a] = Africa;
	  a++;
	}
	  
    }

      MyReadFile.close ();
    
    for(int j = 0; j < a; j++)
    {
        cout << endl;
    }
 
      srand(time(NULL)); //random seed 

         i = rand() % 54; 
         //cout << A[i] << endl; 

		string masked = A[i]; //hides random country word with underscores

			for (int h = 0; h < masked.size(); h++) {
				if (masked[h] != ' '){
					cout << "_ "; //underscores for country
				}
				else {
					cout << " - "; //hyphens for spaces in country
					cout << '\n';
				}
			} cout << '\n';
			
		    int opt;
			do{
			    
            cout << "Enter your option: ";
            cin >> opt;
            getGameOption(opt);

        }while(opt != 0);
        
}

void GameDecision(char a){
    cout << "Do you want to play? If YES, enter 'Y' otherwise enter 'N'." << endl;
	cin >> a; //player's input

	if (a == 'Y' || a == 'y'){
		cout << "Enter PLAYER's NAME and finish with a '.': ";
		

	}
		
		else if (a == 'N' || a == 'n'){
			cout << "See you again :)" << endl;
			
		}

		else{
			cout << "GAME FAILED ERROR! Reload Game." << endl;

		}
}

void getGameOption(int opt){
			
					switch (opt){
				    case 0:
					    cout << "Exit option" << endl;
					    break;
					case 1:
						cout << "You've entered Option 1." << endl;
						break;
					case 2:
						cout << "You've entered Option 2." << endl;;
						break;
					case 3:
						cout << "You've entered Option 3." << endl;
						break;
					default:
						cout << "That is not an Option." << endl;
					}
}



class GameCountry{
    string puzzle;
    GamePuzzle();
    public:
    
    GameCountry(string p, string m){
        puzzle = p;
        masked = m;
    }
    
    
    
    
};
