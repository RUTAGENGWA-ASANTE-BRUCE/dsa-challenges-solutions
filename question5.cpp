#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int PI=3.14;
	
	float r;
	
	cout<<"Enter the radius of the sphere: "<<endl;
	cin>>r;
	float volume=(4*PI*pow(r,3))/3;
	
	cout<<"The volume of the sphere with radius "<<r<<" is "<<volume;
}