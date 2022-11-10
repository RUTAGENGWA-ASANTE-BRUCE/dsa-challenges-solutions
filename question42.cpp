#include  <iostream>
#include <vector>
using namespace std;

vector<int> getFactors(int number){
	vector<int> factors;
	int myNumber=number;
	for(int i=1;myNumber>0 && i<=number/2;i++){
		if(myNumber%i==0){
			factors.push_back(i);
		}
	}
	return factors;
}

int isNormal(int number){
	vector<int> factors=getFactors(number);
	int isNormal=1;
	
	for(int i:factors){
		if(i%2!=0 && i!=1){
			isNormal=0;
			return isNormal;
			
		}
	}
	return isNormal;
}

int main(){
	int number=0;
	cout<<"Enter the number: "<<endl;
	cin>>number;
	string answer=(isNormal(number))?"The number is normal":"The number is not normal.";
	cout<<answer;
	return 0;
}