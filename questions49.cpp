#include <iostream>
using namespace std;

int isPrime(int number){
	int factors=0;
	for(int i=1;i<=(number/2);i++){
		if(number%i==0){
			factors++;
			
		}	
	}
	if(factors>1){
		return 0;
	}
	else{
		return 1;
	}

}

int isMagic(int a[],int len){
	int sumOfPrimeNumbers=0;
	for(int i=0;i<len;i++){
		if(isPrime(a[i])){
			sumOfPrimeNumbers+=a[i];
		}
	}
	if(sumOfPrimeNumbers==a[0]){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	
	int numbers[]= {8, 5, -5, 5, 3};
	int len=4;
	cout<<"The functional return: "<<isMagic(numbers,len);
	return 0;
}