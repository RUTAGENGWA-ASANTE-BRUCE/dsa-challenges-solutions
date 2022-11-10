#include <iostream>
#include <vector>
#include<cstdlib>
#include<time.h>
using namespace std;

vector<int> addRandomNumber(vector<int> arr) {
	arr.push_back(rand());
	arr.push_back(rand());
	arr.push_back(rand());
	arr.push_back(rand());
	return arr;
}

void printArr (vector<int> arr){
	cout << "Called Print ARR" << endl;
	for(int x: arr){
		cout << "--> " << x << endl;
	}
}

int main () 
{
	srand(time(0));
	vector<int> myArr;
	vector<int> second = addRandomNumber(myArr);
	
	printArr(second);
	
	second = addRandomNumber(second);
	printArr(second);
	return 0;
}