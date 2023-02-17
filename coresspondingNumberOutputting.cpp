
//  a vector holding the ten string values, 1 -> 10 spelled out,
// for example: 
// input: 7, out: seven
#include <iostream>
#include<vector>
using namespace std;

int main(void){
	vector<string> numbers = {"one","two","three","four","five","six","seven","eight","nine","ten"}; 
	vector<int> coresspondingNums = {1,2,3,4,5,6,7,8,9,10 };

	cout << "Input a number(int) in range [1,10]";
	int num;
	cin >> num;
	cout << numbers[num-1] ; 



} 
