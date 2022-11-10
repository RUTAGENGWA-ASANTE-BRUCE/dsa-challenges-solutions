#include <iostream>
#include <cstring>
using namespace std;

string removeSpaces(string word){
	int spaces=0;
	string str=word;
	for(int i=0;i<word.length();i++){
		if(word[i] == ' '){
			spaces++;
			for(int y=i;y<word.length();y++){
				
			char swappCharacter=word[y+2];
			str[y]=word[y+1];
			word[y+1]=swappCharacter;
			}
		}
	}
	return str;
}

int main(){
	cout<<"Enter the phrase you want to remove spaces from: "<<endl;
	string phrase;
	getline(cin,phrase);
	
	string removedSpacesString=removeSpaces(phrase);
	cout<<endl<<removedSpacesString;
	return 0;
}