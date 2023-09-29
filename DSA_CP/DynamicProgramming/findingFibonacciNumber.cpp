// #include <iostream>

// // fibonacci Series: 0 1 1 2 3 5 8 13 21 34
// //fibonacci Position 1 2 3 4 5 6 7 8  9  10

// long long int getFibAt(const int pos)
// {
//     if (pos == 1)
//         return 0;
//     if (pos <= 3 && pos > 1)
//     {
//         return 1;
//     }
//     return getFibAt(pos - 1) + getFibAt(pos - 2);
// }

// int main()
// {

//     std::cout << getFibAt(5) << std::endl;
//     std::cout << getFibAt(10) << std::endl;
//     std::cout << getFibAt(15) << std::endl;
//     std::cout << getFibAt(20) << std::endl;
// after this
//     std::cout<<getFibAt(50)<<std::endl;
//     // this will run very slow very very slow fro  the last one

// }

// N dynamic programming storing the repeating call  values   to the map , also can do with object
//  the course I'm learning from is in javascript so  adapting it for the situation

// it can be hashing maybe

#include <iostream>
#include <unordered_map>

std::unordered_map<int, long long int> memo;

long long int fibonacci(int n)
{
    if (memo.find(n) != memo.end())
        return memo[n];
    if (n == 1)
    {
        return 0;
    }
    if (n <= 3)
        return 1;
    memo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return memo[n];
}

int main()
{

    std::cout << fibonacci(5) << std::endl;
    std::cout << fibonacci(10) << std::endl;
    std::cout << fibonacci(20) << std::endl;
    std::cout << fibonacci(30) << std::endl;
    std::cout << fibonacci(60) << std::endl;
    std::cout << fibonacci(70) << std::endl;

    return 0;
}

/*
    this method of memorizing the value bring down the time complexity form
    O(n^2)  to

    only => O(n)
    see the note paper for more details if you want




*/