#include <iostream>
using namespace std;


int identifyPrimeNumber(int a){
	int divisors=1;
	int m=a/2;
	for(int i=2;i<=m;i++){
		if(a%i==0){
			divisors+=1;
		}
	}
	
	if(divisors>2){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int product=1;
	for(int i=1;i<100;i++){
		if(identifyPrimeNumber(i)){
			product*=i;
		}
	}
	
	cout<<"The product of all prime numbers between 1 and 100 is "<<product;
	return 0;
}