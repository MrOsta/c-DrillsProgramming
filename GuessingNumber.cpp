// Not really the best way to solve such a question, I've to admit. I am still a newbie.
// I am not "FOR SURE" accepting my current level, but "Allah is always with those who are truly patient"
// i don't have to be in a hurry to do Great Things in One DAY:)
// PATIENCE IS POWER.

#include <iostream>
using namespace std;

int main (){


	int first =  1; 
	int last  =  100;
	int count = 0;
	// first == last, then  we've found the number :).
	// the number of tries mustn't exceed 7, because of O(log(n)) "growing Logarithmically". 
	while(first != last) {
		int mid = (first + last ) / 2 ; 
		string ans = "" ;
		cout << "Is the number greater than, " << mid ;
		cin >> ans;
		if(ans == "y") {
			// (mid, last] possible range  " half-interval "
			first = mid +1;
		} else if(ans == "n") {
			// [first,mid], here mid is the included in the range because the way he the question goes.
			last = mid ;
		}

	} 
	cout << "Your number is " << first;

} 

