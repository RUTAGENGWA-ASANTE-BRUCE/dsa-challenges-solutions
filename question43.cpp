#include <iostream>
#include <vector>
using namespace std;

int isAllPosibility(int numbers[],int len){
	int isAllPosibility=0;
	if((sizeof(numbers)/sizeof(int))==0){
		return isAllPosibility;
	}
	for(int i=0;i<=len-1;i++){
		int isMember=0;
		for(int y=0;y<=len-1;y++){
			
			if(i==numbers[y]){
				isMember=1;
			}
		}
		if(!isMember){
			isAllPosibility=0;
			return isAllPosibility;	
		}
		else{
			isAllPosibility=1;
		}
	}
	return isAllPosibility;
}

int main(){
	int len=4;
	int numbers[]={0,2,3};
	string answer=isAllPosibility(numbers,len)?"The array is all posibility.":"The array is not all posibility.";
	cout<<answer;
	return 0;
}