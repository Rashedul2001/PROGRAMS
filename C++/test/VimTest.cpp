
#include <iostream>
#include <vector>

int main()
{
    std::vector v{ 0, 1, 2 };
    v.resize(5); // set size to 5

    std::cout << "The length is: " << v.size() << '\n';

    for (int i : v)
        std::cout << i << ' ';

    std::cout << '\n';

    return 0;
}
