#include <iostream>
#include <cmath>
using namespace std;

int calculateVolume(float side){
	
	return pow(side,3);
}

int main(){
	int side;
	cout<<"Enter the side of the cube: "<<endl;
	cin>>side;
	float volume=calculateVolume(side);
	cout<<endl<<"The volume of the cube with side "<<side<<" m is "<<volume<<" m cubed.";
	return 0;
}