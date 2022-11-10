#include <iostream>

using namespace std;

namespace calculator{
	float add(float a, float b){
		return a+b;
	}
	float multiply(float a, float b){
		return a*b;	
	}
	float divide(float a, float b){
		return a/b;
	}
	float subtract(float a, float b){
		return a-b;
	}
}
using namespace calculator;
int main(){
	int choice;
	int a;
	int b;
	for(;;){
		cout<<"MENU"<<endl<<"1.Add"<<endl<<"2.Subtract"<<endl<<"3.Multiply"<<endl<<"4.Divide"<<endl<<"5.Modulus"<<endl;
		cout<<"Enter your choice: ";
		cin>>choice;
		if(choice==1 || choice==2|| choice==3|| choice==4){
		cout<<"Enter two numbers : "<<endl;
		cin>>a;
		cin>>b;
			
		if(choice==1){
			float sum=calculator::add(a,b);
			cout<<"The sum of "<<a<<" and "<<b<<" is "<<sum;
			break;
		}
		if(choice==2){	
			float difference=calculator::subtract(a,b);
			cout<<"The difference of "<<a<<" and "<<b<<" is "<<difference;
			break;
		}
		if(choice==3){
			float multiplication=calculator::multiply(a,b);
			cout<<"The multiplication of "<<a<<" and "<<b<<" is "<<multiplication;
			break;        
		}
		if(choice==4){ 
			float quotient=calculator::divide(a,b);
			cout<<"The quotient of "<<a<<" and "<<b<<" is "<<quotient;
			break;
		}
	}
		else{
			cout<<"Enter the correct option please!!!!"<<endl;
			continue;
		}
	}
}