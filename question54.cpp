#include <iostream>
using namespace std;

int isBean(int a[],int len){
	int isBean=0;
	for(int i=0;i<len;i++){
		if(a[i]==9){
			int is13Available=0;
			for(int y=0;y<len;y++){
				if(a[y]==13){
					is13Available=1;
				}
			}
			if(!is13Available){
				isBean=0;
				return isBean;
			}
		}
		if(a[i]==7){
			int is16Available=0;
			for(int y=0;y<len;y++){
				if(a[y]==16){
					is16Available=1;
				}
				if(is16Available){
					isBean=0;
					return isBean;
				}
			}
		}
		else{
			isBean=1;
		}
	}
	return isBean;
}

int main(){
	int numbers[]=   {3, 6, 9, 5,7, 13, 6, 17};
	int len=8;
	cout<<"Functional return: "<<isBean(numbers,len);
}