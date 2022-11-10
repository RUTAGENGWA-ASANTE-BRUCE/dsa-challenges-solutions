#include <iostream>
#include <vector>
using namespace std;

vector<int> getFactors(int number){
	vector<int> factors;
	for(int i =1;i<(number/2);i++){
		if(number%i==0){
			factors.push_back(i);
		}
	}
	factors.push_back(number);
	cout<<"Factors: ";
	cout<<"--> ";
	for(int x:factors){
		cout<<x<<" ";
	}
	cout<<endl;
	return factors;
}

string rainDrop(int number){
	vector<int> factors=getFactors(number);
	vector<char> rainDrop;
	string dropPart;
	for(int i:factors){
		if(i==3){
			dropPart="Pling";
		}
		else if(i==5){
			dropPart="Plang";
		}
		else if(i==7){
			dropPart="Plong";
		}
		else{
			continue;
		}
		for(int i=0;i<dropPart.length();i++){
			rainDrop.push_back(dropPart[i]);
		}
	}
	string rain(rainDrop.begin(),rainDrop.end());
	return rain;
}

int main(){
	cout<<"Enter the number: "<<endl;
	int number;
	cin>>number;
	string rain=rainDrop(number);
	if(rain==""){
		rain=to_string(number);
	}
	cout<<endl<<rain;
}