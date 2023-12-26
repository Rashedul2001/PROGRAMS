#include<iostream>
using namespace std;

void towerOfHanoi(int peg,char source,char helper,char destination)
{
	if(peg<=0)
	return ;
	towerOfHanoi(peg-1,source,destination, helper);
	std:;cout<<source<<"->"<<destination<<endl;
	towerOfHanoi(peg-1,helper,source,destination);
	}



int main()
{
	cout<<"Enter The number of Pegs"<<endl;
	int n;
	cin>> n;
	towerOfHanoi(n,'a','b','c');

	return 0;
}
	

