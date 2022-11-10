#include <iostream>
using namespace std;

int getMax(int a[],int len){
	int max=a[1];
	for(int i=0;i<len;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	return max;
}
int getMin(int a[],int len){
	int min=a[1];
	for(int i=0;i<len;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	return min;
}

int isComplete(int a[],int len){
	int isComplete=0;
	int max=getMax(a,len);
	int min=getMin(a,len);
	
	if(min==max || len!=((max-min)+1)){
		return isComplete;
	}
	else{
		for(int i=0;i<len;i++){
			if(a[i]>max || a[i]<min){
				isComplete=0;
				return isComplete;
			}
			else{
				isComplete=1;
			}
		}
	}
	return isComplete;
	
}

int main(){
	int len=6;
	int numbers[]={2, 0,1,5, 3, 4};
	cout<<"The functional return: "<<isComplete(numbers,len);
}