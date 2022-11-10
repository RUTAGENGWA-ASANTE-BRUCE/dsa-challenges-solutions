#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


vector<int> getPrimeNumbersBefore(int number){
	vector<int> primeNumbers;
	for(int i=2;i<number;i++){
		int factors=2;// the number and 1 are the first 2 factors
		for(int y=2;y<=i/2;y++){
			if(i%y==0){
				factors++;
				break;
			}
		}
		if(factors==2){
			primeNumbers.push_back(i);
		}
	}
	return primeNumbers;	
}

int main(){
	cout<<"Enter the number to check its nth prime number position: "<<endl;
	int number;
	cin>>number;
	vector<int> primeNumbersBefore=getPrimeNumbersBefore(number);
	for(int x:primeNumbersBefore){
		cout<<"--> "<<x<<endl;
	}
	cout<<endl<<"The prime number nth position of the supplied number is "<<primeNumbersBefore.size()+1;
}