#include<iostream>

int main()
{
	std::cout<<"Enter the amount of Elements:";
	int n;
	std::cin >> n;
	int array[n];
	std::cout<<"Enter n increasing integer elements:"<<std::endl;
	for(int i=0;i<n;i++)
	{
		std::cin>>array[i];
	}
	std::cout<<"Enter the element you want to Search:";
	int element;
	std::cin>>element;
	int start=0, end=n-1;
	while(start<=end)
	{
		int mid = start+(end-start)/2;
		if(array[mid]==element)
		{
			std::cout<<"Element is found in position: "<<mid+1<<std::endl;
			return 0;
		}
		else if(array[mid]>element) 
			end=mid-1;
		else start=mid+1;
	}
	std::cout<<"Element is not present in the Array."<<std::endl;

	return 0;
}
