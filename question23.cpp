#include <iostream>
#include <ctype.h>
using namespace std;

int main(){
	cout<<"Ente a single characte/digit to check if it is a number or a alpha letter: "<<endl;
	char character;
	cin>>character;
	string result=(isdigit(character))?"The character is a digit":"The character is not a digit";
	cout<<endl<<result;
}