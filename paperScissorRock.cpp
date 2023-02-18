#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
#include <vector>
using namespace std; 




string flipString(string txt) { 

	string reversedString = "";
	
	for(int i = txt.length()-1 ; i >= 0; i--) {  
		
		reversedString += txt[i];
		
	}
	return reversedString; 

} 
string decideWinner(string userTurn,string botTurn) {
	 vector<string>UserWinningCases = {"RS", "PR", "SP"} ;
	// losing by using the reversed String Function
	  cout << userTurn << "\t vs " << botTurn << endl;
	for(string win : UserWinningCases) { 
		if(win == userTurn+botTurn) {
			return "WIN" ; 
		}else if(flipString(win) == userTurn+botTurn ) { 
			return "LOSE";
		}else if(userTurn == botTurn) {
			return "DRAW";

		}
	}
	return "";
} 

int _random() {
        int r =rand() % 3 + 0 ; // random integer from range 0-3';
	return  r;

} 
int main (void) { 
	srand(time(0)); // seeding, setting up an initial point for the random function
	vector<string>botTurns = {"R","S","P"};
	string userTurn = "";

	cout << "What is your turn? (P,S,R)"; 
	cin >> userTurn;
	cout << decideWinner(userTurn,botTurns[_random()]);


	return 0 ; 
}

