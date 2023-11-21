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
	std::cout << "Enter the postion in which you Want to insert an Element:";
	int k;
	std::cin >> k;
	std::cout << " Enter the Element: ";
	int element;
	std::cin >> element;
	for (int i = n; i >= k; i--)
	{
		array[i] = array[i - 1];
	}
	array[k - 1] = element;
	n++;
	std::cout << "After inserting the element the array is:" << std::endl;
	for (int i = 0; i < n; i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}
