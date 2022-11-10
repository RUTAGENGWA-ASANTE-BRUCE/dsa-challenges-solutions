#include <iostream>
using namespace std;

class PhraseProperties{
	public:
		int words;
		int spaces;
};

PhraseProperties getProperties(string phrase){
	int spaces=0;
	int words=0;
	PhraseProperties myPhrase;
	for(int i=0;i<phrase.length();i++){
		if(phrase[i]==' '){
			spaces++;
			if(phrase[i+1]!=' '){
				words++;
			}
		}
	}
	myPhrase.spaces=spaces;
	myPhrase.words=words;
	return myPhrase;
}

int main(){
	string phrase;
	cout<<"Ente the phrase: "<<endl;
	getline(cin,phrase);
	PhraseProperties myPhrase=getProperties(phrase);
	int phraseLength=phrase.length();
	cout<<endl<<"Number of charcaters without spaces: "<<phraseLength-myPhrase.spaces<<endl;
	cout<<"Number of characters with spaces:  "<<phraseLength<<endl;
	cout<<"Number of words: "<<myPhrase.words;
	
}