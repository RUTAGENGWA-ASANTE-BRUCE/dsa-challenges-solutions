#include <iostream>
#include <vector>
using namespace std;


vector<int> fill(int arr[],int k, int n){
	vector<int> clippedPart;
	if(k==0){
		return clippedPart;
	}
	vector<int> arr2;
	for(int i=0;i<k;i++){
		clippedPart.push_back(arr[i]);
	}
	for(int i=0;arr2.size()<n;i++){
		for(int x:clippedPart){
			if(arr2.size()<n){
				arr2.push_back(x);
			}
		}
	}
	return arr2;
	
}

int main(){
	int arr[]={4, 2, -3, 12};
	vector<int> arr2=fill(arr, 0, 5);
	if(arr2.size()==0){
		cout<<"null";
	}
	else{
		
		cout<<"{";
		for(int i:arr2){
			cout<<i<<", ";
		}
		cout<<"}";
		}
	return 0;
}