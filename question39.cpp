#include <iostream>
#include <bitset>
#include <vector>
#include <string>
using namespace std;

string transformToBinary(int number){
	return bitset<8>(number).to_string();
}
vector<int> getDigits(int number){
	vector<int> digits;
	int myNumber=number;
	cout<<"Binary presentation: ";
	for(int i=0;myNumber>0;i++){
		digits.push_back(myNumber%10);
		cout<<myNumber%10;
		myNumber/=10;
	}
	
	return digits;
}

int getOnes(int number){
//	int binary=stoi(transformToBinary(number));
//	vector<int> digits=getDigits(binary);
//	int countOnes=0;
//	
//	for(int i:digits){
//		if(i==1){
//			countOnes++;
//		}
//	}
//	return countOnes;

	int ones=0;
	int myNumber=number;
	for(int i=0;myNumber>0;i++){
		if(myNumber%2!=0){
			ones++;
		}
		myNumber/=2;
	}
	return ones;
}

int main(){
	int number;
	cout<<"Enter the number: "<<endl;
	cin>>number;
	int ones=getOnes(number);
	cout<<endl<<"From the binary representation of "<<number<<" there are "<<ones<<" 1s.";
}