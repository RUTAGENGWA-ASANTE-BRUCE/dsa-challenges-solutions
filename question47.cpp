#include <iostream>
using namespace std;

int isBalanced(int a[],int len){
	int isBalanced=0;
	for(int i=0;i<len;i++){
		int opositeAvailable=0;
		for(int y=0;y<len;y++){
			if(-a[y]==a[i]){
				opositeAvailable=1;
			}
		}
		if(opositeAvailable){
			isBalanced=1;
		}
		else{
			isBalanced=0;
		}
	}
	return isBalanced;
}

int main(){
	int len=4;
	int numbers[]={-2,-5,5,2};
	cout<<"Function return: "<<isBalanced(numbers,len);
	return 0;
}