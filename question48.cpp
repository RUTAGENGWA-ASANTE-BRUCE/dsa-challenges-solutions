#include <iostream>
using namespace std;

int isEvens(int number){
	int myNumber=number;
	int isEvens=0;
	for(int i=0;myNumber>0;i++){
		int digit=myNumber%10;
		if(digit%2==0){
			isEvens=1;
		}
		else{
			isEvens=0;
			return isEvens;
		}
		myNumber/=10;
	}
	return isEvens;
}

int main(){
	int number;
	cout<<"Enter the number: "<<endl;
	cin>>number;
	cout<<endl<<"Function return: "<<isEvens(number);
	return 0;
}
