#include <iostream>
#include <vector>
using namespace std;

void checkCentered(vector<int> numbers){
	int size=numbers.size();
	if(size%2==0){
		cout<<"No middle element.";
	}else{
		int isCentered=0;
		int center=numbers[((size+1)/2)-1];
		for(int i: numbers){
			if(i==center){
				continue;
			}
			if(i>center){
				isCentered=1;
			}
		}
	
		cout<<"the middle element "<<center<<(isCentered?"":" not")<<" is strictly less than all other elements";
	}
	
}

vector<int> getArray(int a){
 	vector<int> numbers;
	for(int i=0;i<a;i++){
		cout<<"Enter the number at position "<<i+1<<endl;
		int number;
		cin>>number;
		numbers.push_back(number);
		cout<<endl;
	}
	return numbers;
}

int main(){
	cout<<"Enter the number of elements you want to be in the numbers array: "<<endl;
	int size;
	cin>>size;
	vector<int> numbers=getArray(size);
	checkCentered(numbers);

	return 0;
}