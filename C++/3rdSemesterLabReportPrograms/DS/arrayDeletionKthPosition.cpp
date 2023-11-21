#include <iostream>

int main()
{
	int array[1000];
	std::cout << "Enter the amount of Elements in the Array:";
	int n;
	std::cin >> n;
	std::cout << "Enter the Elements of the Array:";
	for (int i = 0; i < n; i++)
	{
		std::cin >> array[i];
	}
	std::cout << "Enter the postion in which you Want to delete an Element:";
	int k;
	std::cin >> k;
	for (int i=k-1;i<n-1;i++)
	{
		array[i] = array[i + 1];
	}
	n--;
	std::cout << "After Deleting the element the array is:" << std::endl;
	for (int i = 0; i < n; i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}
