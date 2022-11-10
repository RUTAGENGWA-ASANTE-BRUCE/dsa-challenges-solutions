#include <iostream>
using namespace std;

int isOddValent(int a[],int len){
	int hasDuplicates=0;
	int hasOddNumber=0;
	
	for(int i=0;i<len;i++){
		if(a[i]%2!=0){
			hasOddNumber=1;
		}
		int duplicates=0;
		for(int y=0;y<len;y++){
			if(a[y]==a[i] && i!=y){
				hasDuplicates=1;
			}
		}
	}
	return (hasDuplicates && hasOddNumber)?1:0;
}

int main(){
	int len=5;
	int numbers[]={4,1,35,5,4};
	cout<<isOddValent(numbers,len);
	
}