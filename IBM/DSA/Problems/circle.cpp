#include <iostream>

using namespace std;

class Circle
{
private:
    int radius;

public:
	Circle(int rad): radius{rad}{}
	void setRadius(int radius)
	{
		this->radius=radius;
	}
	int getRadius(){
		return radius;
	}
	
	
	
};

class Utility
{
public:
	
    double calculateArea(Circle c) const { 
	int r{c.getRadius()};
	
	return 3.14*r*r; }
};

int main()
{
	int radius{0};
	cout<<"Enter the radius in (cm)"<<endl;
	cin>>radius;
	
	Circle circle1(radius);
	Utility c1;
	cout<<"The Area is"<<c1.calculateArea(circle1);
	return 0;
	
}
	

