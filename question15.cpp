#include <iostream>
#include <ctime>
using namespace std;

int main(){
	
	time_t now=time(0);
	char* date_time=ctime(&now);
	cout<<"The current data and time is "<<date_time;
	return 0;
	
}