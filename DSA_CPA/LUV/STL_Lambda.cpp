#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::cout << [](int a){return a ;}(2)<< std::endl;;// lambda function 

    auto sumLambda = [](int a, int b ) {return a + b;};

    std::cout << sumLambda(9,2) << std::endl;

    std::vector<int> t{3,6,7,2},f{5,63,-6,7,8};
    std::cout << std::boolalpha;
    std::cout << all_of(t.begin(), t.end(), [](int a) {return a >= 0;})<< std::endl;
    std::cout << all_of(f.begin(),f.end(), [](int a) {return a >= 0;}) << std::endl;

    // others are * any_of and * none_of 
    std::cout << none_of(f.begin(),f.end(), [](int a){ return a < 0;} ) << std::endl;
    






    return 0;
}