#include <iostream>
#include <vector>
#include <numeric>
int main()
{
    std::vector<int> vec(5);
    std::iota(vec.begin(), vec.end(), 0);
    std::cout << "vec.begin()= " << *vec.begin() << "vec.end()>>" << *(vec.end() - 1) << std::endl;
    for (int it : vec)
    {
        std::cout << it << " " << std::endl;
    }
    return 0;
}
