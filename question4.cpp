#include <iostream>

using namespace std;


int swapp(int& a, int& b){
	
	int first=a;
	int second=b;
	
	b=first;
	a=second;
	return 0;
}
int main(){
	int a,b;
	cout<<"Enter the first number: "<<endl;
	cin>>a;
	cout<<"Enter the second number: "<<endl;
	cin>>b;
	
	int& aReference=a;
	int& bReference=b;
	swapp(aReference,bReference);
	cout<<"After swapping the 1st number is : "<<a<<endl; 
	cout<<"After swapping the 2nd number is : "<< b;

}