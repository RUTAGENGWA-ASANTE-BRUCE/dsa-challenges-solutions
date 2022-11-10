#include <iostream>
#include <cmath>
using namespace std;
float PI=3.14;


class Circle{
	public:
		float radius;
		float perimeter;
		float area;
};

Circle myCircle;

void calculateArea(float radius){
	myCircle.area=pow(radius,2)*PI;
}
void calculatePerimeter(float radius){
	myCircle.perimeter=2*PI*radius;
}

int main(){
	cout<<"Enter the perimeter of the circle: "<<endl;
	float radius;
	cin>>myCircle.radius;
	calculateArea(myCircle.radius);
	calculatePerimeter(myCircle.radius);
	cout<<"The circle with "<<myCircle.radius<<" m radius has a perimeter of "<<myCircle.perimeter<<" m and "<<myCircle.area<<" m squared area";
}