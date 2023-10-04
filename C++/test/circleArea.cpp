#include<iostream>
using namespace std;

class Circle
{
	private:
		int radius{};
    public:
		Circle(int rad):radius{rad}{}
		void setRadius(int radius)
		{
			this->radius= radius;
		}
		int getRadius()
			{
				return this->radius;
			}

};
class Utility
{
	public:
		double calculateArea(Circle c1)
		{
			int r= c1.getRadius();
			return r*r*3.14;
		}


};



int main()
{
	int radius;
	cout<<"Enter the radius(cm): "<<endl;
	cin>>radius;
	Circle c1{radius};
	Utility u1;
	cout<<"The area is: "<<u1.calculateArea(c1)<<"(cm2)"<<endl;

	return 0;
}
