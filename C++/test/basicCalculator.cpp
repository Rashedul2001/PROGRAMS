#include <iostream>
#include <limits>

using namespace std;

void clearAndIgnore()
{
	cin.clear();
	cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
}
bool check(char x)
{
switch(x)
{
	case '+':
	case '-':
	case '*':
	case'/':
	return true;
	break;
	default:
	return false;
	break;


}
}
double getDouble()
{
	while (true)
	{
		double x{};
		cout << "Enter a value Please:" << endl;
		cin >> x;
		if (cin.fail())
		{
		clearAndIgnore();
		}
		else
		{
		clearAndIgnore();
			return x;
			}
	}
}
char getOperation()
{
while(true)
{
	cout<<"Enter your Operation:"<<endl;
	char x;
	cin>>x;
	if(cin.fail())
	clearAndIgnore();
	else
	{
	clearAndIgnore();
	if(check(x))
	return x;
	}

}
}
void getResult(double x,char op,double y)
{
	switch(op)
	{
	case '*': cout<< "x*y="<<x*y; break;
	case '/': cout<<  "x/y="<<(x/y); break;
	case '+': cout<< "x+y="<<(x+y);break;
	case '-': cout<< "x-y="<<(x-y); break;
	default: cout<<"Awesome"<<endl;


	}
}

int main()
{
	double x{getDouble()};
	char op{getOperation()};
	double y{getDouble()};
	getResult(x,op,y);
	return 0;
}
