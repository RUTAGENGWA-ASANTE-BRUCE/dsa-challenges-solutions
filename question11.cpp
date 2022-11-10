#include <iostream>
using namespace std;

class Rectangle{
	public:
		float width;
		float length;
		float area;
		float perimeter;
};

Rectangle calculatingAreaPerimeter(float length,float width){
	Rectangle myRectangle;
	myRectangle.width=width;
	myRectangle.length=length;
	float perimeter=(length+width)*2;
	float area=length*width;
	
	myRectangle.area=area;
	myRectangle.perimeter=perimeter;
	return myRectangle;
}

int main(){
	float length;
	float width;
	cout<<"Enter the length: "<<endl;
	cin>>length;
	cout<<endl;
	cout<<"Enter the width: "<<endl;
	cin>>width;
	cout<<endl;
	Rectangle rectangle=calculatingAreaPerimeter(length,width);
	
	cout<<"The rectangle of "<<rectangle.width<<" m width, length "<<rectangle.length<<" m length has area of "<<rectangle.area<<" m and "<<rectangle.perimeter<<" m.";
}