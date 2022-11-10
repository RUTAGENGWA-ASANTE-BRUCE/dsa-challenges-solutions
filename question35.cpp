#include <iostream>
#include <vector>
using namespace std;

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

int getDifferenceOddEven(vector<int> numbers){
	int oddSum=0;
	int evenSum=0;
	for(int i:numbers){
		if(i%2==0){
			evenSum+=i;
		}
		else{
			oddSum+=i;
		}
	}
	return oddSum-evenSum;
}

int main(){
		cout<<"Enter the number of elements you want to be in the numbers array: "<<endl;
	int size;
	cin>>size;
	vector<int> numbers=getArray(size);
	int difference=getDifferenceOddEven(numbers);
	cout<<endl<<"The difference of the sum of odd numbers and the sum of even numbers in the array is: "<<difference;
	return 0;
}