#include <iostream>
using namespace std;

int calculateSpaces(string phrase){
	int spaces=0;
	for(int i=0;i<phrase.length();i++){
		if(phrase[i]==' '){
			spaces++;
		}
	}
	return spaces;
}

int main(){
	string phrase;
	cout<<"Enter the phrase/word to count the number of spaces: "<<endl;
	getline(cin,phrase);
	int spaces=calculateSpaces(phrase);
	
	cout<<"The phrase/word given has "<<spaces<<" spaces.";
	cout<<endl<<phrase;
	return 0;
}