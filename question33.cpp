#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
	int sum=0;
	int sumOfSquares=0;
	int limit;
	cout<<"Enter the limit of natural numbers(N natural numbers): "<<endl;
	cin>>limit;
	
	for(int i=1;i<=limit;i++){
		sum+=i;
		sumOfSquares+=pow(i,2);
	}	
	cout<<"The difference between the square of the sum and the sum of the squares of the first "<<limit<<" natural numbers is "<<pow(sum,2)-sumOfSquares;
}
