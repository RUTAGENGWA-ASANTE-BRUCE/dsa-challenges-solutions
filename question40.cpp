#include <iostream>
using namespace std;

int isDaphne(int numbers[],int len){
	int first=numbers[1]%2;
	int isDaphne=1;
	for(int i=0;i<len;i++){
		if(numbers[i]%2!=first){
			isDaphne=0;
			return isDaphne;
		}
	}
	return isDaphne;
	
}

int main(){
	int len=3;
	int numbers[]={2,4,8};
	int answer=isDaphne(numbers,len);
	cout<<answer;
}	