#include <iostream>
#include <vector>
using namespace std;

int isHollow(int a[],int len){
	int countZeros=0;
	int lastZeroPosition;
	int isHollow=0;
	for(int i=0;i<len;i++){
		if(a[i]==0){
			countZeros++;
			if(a[i+1]!=0){	
				lastZeroPosition=i;
					if(((len-1)-lastZeroPosition)<countZeros || countZeros<3){
						return isHollow;//if there are no enought charactes
					}
			}
		}
		if(i>lastZeroPosition && (i-lastZeroPosition)<=countZeros){
		
			if(a[i]!=0){
				isHollow=1;
				
			}
			else{
				isHollow=0;
				return isHollow;
			}
		}
	}
	return isHollow;
	
}

int main(){
	int numbers[]={1,2,0,0,0,1,3};
	int len=7;
	cout<<"Functional return: "<<isHollow(numbers,len);
}