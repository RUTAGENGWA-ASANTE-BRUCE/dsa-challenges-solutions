#include <iostream>
using namespace std;

int calculateYears(int seconds){
	return seconds/31536000;
}

int main(){
	int johnsSeconds=1000000000;
	int years=calculateYears(johnsSeconds);
	cout<<"After calculating "<<johnsSeconds<<" seconds, John lived "<<years<<" years.";
}