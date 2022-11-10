#include <iostream>
#include <vector>
using namespace std;

vector<int> getDigits(int number){
	int myNumber=number;
	vector<int> digits;
	for(int i=0;myNumber>0;i++){
		digits.push_back(myNumber%10);
		myNumber/=10;
	}
	return digits;
}

int isDigitSum(int a,int b){
	vector<int> digitsA=getDigits(a);
	vector<int> digitsB=getDigits(b);
	if(a<0 ||  b<0){
		return -1;
	}
	int sumA=0;
	int sumB=0;
	for(int i:digitsA){
		sumA+=i;
	}
	for(int i:digitsB){
		sumB+=i;
	}
	return (sumA-sumB)<0?1:0;
}

int main(){
	int a,b;
	cout<<"Enter the first number: "<<endl;
	cin>>a;
	cout<<endl<<"Enter the second number: "<<endl;
	cin>>b;
	cout<<"Function return: "<<isDigitSum(a,b);
	return 0;
}