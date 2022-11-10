#include <iostream>
#include <cmath>
//#include <math.c>
using namespace std;

class Solution{
	public:
		float x1;
		float x2;
};

 Solution findSolution(float a, float b, float c){	
	Solution newSolution;
	newSolution.x1=(-b+sqrt(pow(b,2))+(4*a*c))/(2*a);
	newSolution.x2=(-b-sqrt(pow(b,2))+(4*a*c))/(2*a);
	
//	cout<<newSolution.x1<<" "<<newSolution.x2;
	return newSolution;
}

int main(){
 Solution MySolution=findSolution(80.5,10,10);
 cout<<MySolution.x1<<" "<<MySolution.x2;
}