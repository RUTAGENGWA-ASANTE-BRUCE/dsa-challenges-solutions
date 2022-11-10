#include <iostream>
using namespace std;
int main(){
	int sum=0;
	for(int i=0;i<100;i++){
		if(i%2==0){
			sum+=i;
		}
	}
	cout<<"The sum of all even numebers less than 100 is "<<sum;
}