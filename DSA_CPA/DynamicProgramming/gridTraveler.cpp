// the traveler has a matrix like 2D grid where he can either move right or downward... but can't go left or upwards
//  so If the starting point is the upper left grid and the destination is lower right then
// how many ways are there to go to the destination,   with a given dimension of   M * N

#include <iostream>
#include <map>
#include <string>
#include <sstream>

// ** MEMOIZE IT **

// the dynamic part
// I'm doing it with map
// string as a key with separator for each index as if not it can mess up ..like 23,4 with 2,34

std::map<std::string, int> memo;

int gridTraveler(int row, int column)
{
    if (row > column)
    {
        int temp = row;
        row = column;
        column = temp;
    }

    std::stringstream ss;
    ss << row << "," << column;
    // I could use to_string() method but sstream way was cooler
    std::string key = ss.str();

    // there is a better way for the revKey to just always make the row small and column big
    // ss.clear();
    // ss.str(""); // if not used stringstream may retain its previous content, causing incorrect keys to be generated1
    // ss << column << "," << row;
    // std::string revKey = ss.str(); // here I am doing this because the result is same for 3,2 and 2,3

    if (memo.find(key) != memo.end())
        return memo[key];

    if (row == 1 && column == 1) // traveler is on the destination which is also the starting point so there is only one way
    {
        return 1;
    }
    if (row == 0 || column == 0) // cause there is no grid to travel
    {
        return 0;
    }

    //               downwards                             right
    // return gridTraveler(row - 1, column) + gridTraveler(row, column - 1);
    memo[key] = gridTraveler(row - 1, column) + gridTraveler(row, column - 1);
    // memo[revKey] = memo[key];// I got much better option
    return memo[key];
}

int main()
{

    // in general time complexity is O(2^(m+n)) space complexity is O(n+m)
    // after dynamic programming the time complexity is O(n*m) space complexity is O(n+m)
    std::cout << gridTraveler(2, 3) << std::endl;   // these are fast because the iterations are really not that much
    std::cout << gridTraveler(4, 5) << std::endl;   // these are fast because the iterations are really not that much
    std::cout << gridTraveler(5, 6) << std::endl;   // these are fast because the iterations are really not that much
    std::cout << gridTraveler(8, 8) << std::endl;   // these are fast because the iterations are really not that much
    std::cout << gridTraveler(10, 12) << std::endl; // these are fast because the iterations are really not that much
    std::cout << gridTraveler(12, 10) << std::endl; // this will give the same answer also faster
    std::cout << gridTraveler(20, 18) << std::endl; // if not memoize this ,for this one it takes decades to solve because iteration is so so much more
    // we can overcome it with dynamic programming
    std::cout << gridTraveler(30, 50) << std::endl; // so much better
    // we should do this even there was only 1 input test case the iteration could go much higher it not used map for only one case

    return 0;
}