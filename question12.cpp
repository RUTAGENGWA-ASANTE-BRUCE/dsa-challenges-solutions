#include <iostream>
using namespace std;

float convertTemperature(float celcius){
	float fahrenheit=(celcius* (9/5))+32;
	return fahrenheit;
}

int main(){
	float celcius=22.7;
	float newTemperature=convertTemperature(celcius);
	cout<<celcius<<" degrees celcius equals "<<newTemperature<<" Fahrenheit.";
	return 0;
}