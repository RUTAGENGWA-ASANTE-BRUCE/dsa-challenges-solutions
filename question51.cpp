#include <iostream>
#include <vector>
using namespace std;

int isPrimeFactor(int number,int a){
	int factors=0;
	if(number%a!=0){
		return 0;
	}
	for(int i=1;i<=a/2;i++){
		if(a%i==0){
			factors++;
		}
	}
	if(factors>1){
		return 0;
	}
	else{
//		cout<<"reached"<<a<<endl;
		return 1;
	}
}


int isPrimeProduct(int number){
	vector<int> primeFactors;
	int isPrimeProduct=0;
	for(int i=1;i<=(number/2);i++){
		if(isPrimeFactor(number,i)){
			primeFactors.push_back(i);
		}
	}

	for(int i:primeFactors){	
		for(int y:primeFactors){
			if((i*y)==number){
				isPrimeProduct=1;
				return isPrimeProduct;
			}
		}
	}
	return isPrimeProduct;
}

int main(){
	cout<<"Enter the number: "<<endl;
	int number;
	cin>>number;
	cout<<"Function return: "<<isPrimeProduct(number);
	return 0;
}