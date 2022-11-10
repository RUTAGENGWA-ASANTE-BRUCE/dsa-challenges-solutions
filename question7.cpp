#include <iostream>
using namespace std;
int main(){
	int product=1;
	for(int i=0;i<20;i++){
		if(i%2!=0){
			product*=i;
		}
	}
	cout<<"The product of all odd numbers between 1 and 20 is "<<product;
}