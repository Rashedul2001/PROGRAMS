#include<iostream>

using namespace std;

void staticIncrementAndPrint()
{	static int staticCount{};
	staticCount++;
	cout<<staticCount<<endl;
}

void incrementAndPrint()
{
	int count{};
	count++;
	cout<<count<<endl;
}

int main()
{
	cout<<"for automatic variable"<<endl;
	incrementAndPrint();
	incrementAndPrint();
	incrementAndPrint();
	cout<<"now for static variable"<<endl;
	staticIncrementAndPrint();
	staticIncrementAndPrint();
	staticIncrementAndPrint();


	return 0;

}
