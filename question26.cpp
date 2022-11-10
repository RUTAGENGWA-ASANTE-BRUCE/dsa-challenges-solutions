#include <iostream>
using namespace std;

int countLength(string word){
	int characters=0;
    for(int i=0;;i++){
 		if(word[i] != '\0'){
 		characters++;
 		}
		else{
			break;
		}
	}
 	return characters;
}

int main(){
	cout<<"Enter the word/phrase"<<endl;
	string phrase;
	getline(cin,phrase);
	
	int length=countLength(phrase);
	
	cout<<"The length is : "<<length;
	return 0;
}