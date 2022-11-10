#include <iostream>
using namespace std;

int isFilter(int numbers[],int len){
	int isFilter=0;
	for(int i=0;i<len;i++){
		for(int y=0;y<len;y++){
			if(numbers[i]==9 && numbers[y]==11) {
				isFilter=1;
			}
			if(numbers[i]==7 && numbers[y]==13){
				isFilter=0;
			}
		}
	}
	return isFilter;
}

int main(){
	int numbers[]={1,2,3,9,10,11};
	int len=6;
	string answer=isFilter(numbers,len)?"The array is a filter array":"The array is not a filter array.";
	cout<<answer;
	return 0;
}