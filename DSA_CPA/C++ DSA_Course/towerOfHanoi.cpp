#include <iostream>
int count = 0;
void towerOfHanoi(int disk, char source, char helper, char destination)
{
    if (disk <= 0)
    {
        return;
    }
    towerOfHanoi(disk - 1, source, destination, helper);
    count++;
    std::cout << "Step " << count << ": Move the top disk from " << source << " to " << destination << std::endl;
    towerOfHanoi(disk - 1, helper, source, destination);
}

int main()
{

    std::cout << "Enter Disk Quantity: ";
    int disk;
    std::cin >> disk;
    towerOfHanoi(disk, 'A', 'B', 'C');

    return 0;
}