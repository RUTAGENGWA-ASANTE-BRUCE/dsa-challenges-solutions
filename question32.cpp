#include <iostream>
#include <vector>
using namespace std;
vector<int> getDigits(int number){
	vector<int> digits;
	int myNumber=number;
	for(int i=0;myNumber>0;i++){
		digits.push_back(myNumber%10);
		myNumber/=10;
	}
	return digits;
}

int countDigit(int number,int a){
	int count=0;
	vector<int> digits=getDigits(number);
	for(int i: digits){
		if(i==a){
			count++;
		}
	}
	return count;
}

int main(){
	int number;
	int digit;
	cout<<"Enter the number: "<<endl;
	cin>>number;
	cout<<endl<<"Enter the digit: "<<endl;
	cin>>digit;
	int answer=countDigit(number,digit);
	cout<<"The number of "<<digit<<"s in "<<number<<" is "<<answer;
	return 0;
}