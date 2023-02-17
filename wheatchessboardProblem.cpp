
// problem: There's an old story that the emperor wanted to thank the inventor of the game of chess and asked the inventor to name hi-
// -s reward, the inventor asked for one grain of rice for hte first square, 2 for the second, 4 for the third, and so on.
// doublin' each time
// Write a program for Calculating how many squares are required to give the inventor "At least 1000" [1000,inf)
// "At least 1,000,000 "[1m,inf)
// "At least 1,000,000,000 "[1b,inf).
// for more information :  https://en.wikipedia.org/wiki/Wheat_and_chessboard_problem


#include <iostream>
using namespace std;
int main (void) {

	int sqN = 1 ; // Number of squares
	int rice = 1 ;  
	string text = "To give the inventor at least "; 
	string fText  = " The number of squares is: "; //following text
						       
	int findCount = 0 ;



	for(; sqN <= 64; sqN++) {  
		rice *= 2;
		if(rice >= 1000 && findCount == 0) { 
			findCount++; 
			cout << text << 1000 << fText << sqN << "\n";
	}else if (rice >= 1000000 && findCount == 1) { 
			cout << text << "1,000,000" << fText << sqN << "\n";
			findCount++;
	}else if (rice >= 1000000000 && findCount == 2){
			cout << text << "1,000,000,000" << fText << sqN << "\n";
			break; // Break, cheap method to save memory xD

	}  

}
}

