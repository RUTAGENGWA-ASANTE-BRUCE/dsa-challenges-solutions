#include <iostream>
#include <cctype>
using namespace std;

string transformToUpperCase(string word){
	string transformed=word;
	for(int i=0;i<word.length();i++){
		transformed[i]=toupper(word[i]);
		cout<<word[i]<<endl;
	}
	return transformed;
}

int main(){
	cout<<"Enter the word/phrase to transform: "<<endl;
	string phrase;
	getline(cin,phrase);
	string transformed=transformToUpperCase(phrase);
	cout<<endl<<transformed;
	return 0;
}