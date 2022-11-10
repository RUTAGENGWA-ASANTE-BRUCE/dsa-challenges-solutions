#include <iostream>
using namespace std;

int main(){
	
	int numberOfIntegers=3;
	int integers[3]={};
	
	for(int i=0;i<numberOfIntegers;i++){
		cout<<"Enter integer number "<<i+1<<endl;
		cin>>integers[i];
	}
	int biggest=integers[0];
	for(int i=0;i<3;i++){
		if(integers[i]>biggest){
			biggest=integers[i];
		}
	}
	cout<<"The biggest integer is "<<biggest;
}