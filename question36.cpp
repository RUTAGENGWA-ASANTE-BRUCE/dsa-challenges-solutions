#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int reverseNumber(int number){
	double reversed=0;
	int myNumber=number;
	int digits=0;
	for(int i=0;myNumber>0;i++){
		int digit=myNumber%10;
		reversed+=digit*(pow(10,-i));
		myNumber/=10;
		digits++;
	}
	return int(reversed*pow(10,digits-1));
}

int main(){
	cout<<"Enter the number to reverse: "<<endl;
	int number;
	cin>>number;
	int reversed=reverseNumber(number);
	reversed=(number>0)?reversed:-reversed;
	cout<<reversed;
	return 0;
}