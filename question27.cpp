#include <iostream>
using namespace std;

int getLength(string word){
	int length=0;
	for(int i=0;;i++){
		if(word[i]!='\0'){
			length++;
		}
		else{
			break;
		}
	}
	return length;
}

string checkPalindrome(string word){
	int isPalindrome=1;
	for(int i=0;i<getLength(word);i++){
		if(word[i]==word[getLength(word)-i-1]){
			isPalindrome=1;
		}
		else{
			isPalindrome=0;
			break;
		}
		
	}
	string answer=(isPalindrome==1)?"The word is a palindrome":"The word is not a palindrome";
	return answer;
}

int main(){
	cout<<"Enter the phrase or word to check if it is a palindrome: "<<endl;
	string phrase;
	getline(cin,phrase);
	string answer=checkPalindrome(phrase);
	
	cout<<endl<<answer;
	return 0;
}