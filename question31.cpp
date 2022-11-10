#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> getFactors(int number){
	int myNumber=number;
	vector<int> factors;
	for(int i=1;i <= (number/2);i++){
		if((number%i)==0){
			factors.push_back(i);
		}
	}
	factors.push_back(number);
	return factors;
}

int minDistance(int number){
	vector<int> factors=getFactors(number);
	cout<<"The factors are: "<<endl;
	for(int x: factors){
		cout<<"--> "<<x<<endl;
	}
	int minDist=abs(factors[0]-factors[1]);
	for(int i: factors){
		for(int y:factors){
			int dist=abs(factors[i]-factors[y]);
			if(factors[y]==factors[i]){
				continue;
			}
			if(dist<minDist){
				minDist=dist;
			}
		}
	}
	return -minDist;
}

int main(){
	cout<<"Enter the number :"<<endl;

	int number;		
	cin>>number;
	int distance=minDistance(number);
	cout<<endl<<"The the smallest positive distance between two factors of a number :"<<distance;
	return 0;
}

