#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


vector<int> getSquares(int limit1,int limit2){
	vector<int> squares;
	for(int i=limit1;i<limit2;i++){
		squares.push_back(pow(i,2));
	}
	return squares;
}

class Pair{
	public:
	int a;
	int b;
	Pair(){}
	Pair(int x, int y){
		a=x;
		b=y;
	}
	void insertPair(int a, int b);
	void printPair();
};

void Pair::insertPair(int x, int y){
	a=x;
	b=y;
}
void Pair::printPair(){
	cout<<a<<" and "<<b<<endl;
}

int hypotenuseRule(int a, int b,vector<int> squares){
	int followsHypotenuseRule=0;
	int sumOfSquares=pow(a,2) + pow(b,2);
	for(int i:squares){
		if(sumOfSquares==i){
			followsHypotenuseRule=1;
		}
	}
	return followsHypotenuseRule;
}
 


int main(){
	int limit1=1,limit2=20;
	vector<int> squares=getSquares(limit1,limit2);
	Pair pairs[500];
	pairs[0]=Pair(5,8);
	int nPairs=0;
//	
	for(int i=limit1;i<limit2;i++){
		for(int y=limit1;y<limit2;y++){
			if(hypotenuseRule(i,y,squares) && i<y){
//				pairs[0]=Pair(i,y);
				nPairs++;
				cout<<"a="<<i<<" and b="<<y<<endl;
			}
		}
	}
//	cout<<"========="<<nPairs<<endl;
//	for(int i=0;i<=nPairs;i++){
//		pairs[nPairs].printPair();
//	}
	cout<<"Total pairs: "<<nPairs;
	return 0;
}