#include <iostream>

using namespace std;

string reverse(string word){
	
	string reversed=word;
	
	for(int i=0;i<word.length();i++){
		reversed[i]=word[word.length()-i-1];
	}
	return reversed;
}

int main(){
	cout<<"Enter the word to reverse: "<<endl;
 	string word;
 	getline(cin,word);
 	
 	string reversed=reverse(word);
 	
 	cout<<endl<<reversed;

	
}