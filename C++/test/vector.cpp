#include<iostream>
#include<vector>


int main()
{
	std::vector<int> v1{9,39,99,66};
	v1.resize(10);
	for(int i: v1)
	std::cout<<i<<' ';
	std::cout<<std::endl;
	std::vector<int> v2{39,358,993,35,02};
	std::vector<int>d1{v2};
	std::cout<<d1[4]<<std::endl;


return 0;

}
	
