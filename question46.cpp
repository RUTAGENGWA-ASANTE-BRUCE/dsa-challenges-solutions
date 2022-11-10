#include <iostream>
using namespace std;

int isPrimeNumber(int number){
	int factors=0;
	for(int i=1; i<=number/2;i++){
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

int isFineArray(int a[],int len){
	int isFine=1;
	
	for(int i=0;i<len;i++){
		if(isPrimeNumber(a[i])){
			int hasTwin=0;
			for(int y=0;y<len;y++){
				if(isPrimeNumber(a[y]) && (a[y]==(a[i]+2) || a[y]==(a[i]-2))) {
					hasTwin=1;
				}
			}
			if(!hasTwin){
				isFine=0;
			}
		}
	}
	return isFine;
}

int main(){
	int numbers[]={7,9,8,15};
	int len=5 ;
	
	cout<<"Function return: "<<isFineArray(numbers,len);
	return 0;
}