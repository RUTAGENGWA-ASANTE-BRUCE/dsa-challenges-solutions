#include <iostream>
using namespace std;

int countElements(int numbers[]){
  	int count=0;
	for(int i=0;i<10;i++)
    {
        if(numbers[i]!='\0')
            count++;
    }
    return count;
}

int* getSimilar(int a[],int b[]){
	int lengthA=countElements(a);
	int lengthB=countElements(b);
	int similarElementsCount=0;
	static int similarElements[]={};
	for(int i=0;i<lengthA;i++){
		for(int y=0;y<lengthB;y++){
			if(a[i]==b[y]){
				similarElements[similarElementsCount]=a[i];
				similarElementsCount++;
			}
		}
	}
	return similarElements;
}


int main(){
	int a[]={1,4,7,5,9};
	int b[]={9,8,3,4,1,5};
	int *similar=getSimilar(a,b);
	
	for(int i=0;i<10 &&*(similar+i)!='\0' ;i++){
		cout<<"-->"<<*(similar+i)<<endl;
	}
	return 0;
}