#include <iostream>
using namespace std;

int checkNumber(int a){
	if(a>0){
		cout<<a<<" is a positive number";
	}
	else if(a<0){
		cout<<a<<" is a negative number";	
	}
	else{
			cout<<"The number you entered is zero";
	}
}

int main(){
	int a;
	cout<<"Enter the number:"<<endl;
	cin>>a;
	cout<<endl;
	checkNumber(a);
	return 0;
}
