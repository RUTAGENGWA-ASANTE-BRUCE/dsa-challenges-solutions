#include <iostream>
using namespace std;

int checkPalindrome(string word){
	int answer=1;
	
	for(int i=0;i<word.length();i++){
		if(word[i]!=word[word.length()-(i+1)]){
			answer=0;
		}
	}
	return answer;
}

int main(){
	string word;
	cout<<"Enter the string to check if it is a palindrome: "<<endl;
	cin>>word;
	cout<<endl;
	int result=checkPalindrome(word);
	string answer=result==1?"The word you entered is a palindrome":"The word is not a palindrome";
	cout<<answer;
	return 0;
}