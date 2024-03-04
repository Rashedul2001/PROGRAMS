#include <bits/stdc++.h>
using namespace std;
void towerOfHanoi(int disk, char source, char helper, char destination)
{
	if (disk <= 0)
		return;
	towerOfHanoi(disk - 1, source, destination, helper);
	static int count = 0;

	count++;
	cout << count << ": Move the top disk from " << source << " to " << destination << endl;
	towerOfHanoi(disk - 1, helper, source, destination);
}

int main()
{
	std::cout << "Enter the amount of disk: ";
	int n;
	cin >> n;
	towerOfHanoi(n, 'A', 'B', 'C');

	return 0;
}