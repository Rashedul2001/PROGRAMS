#include <iostream>
#include <vector>
#include <algorithm>
// the student will take candies one more of what they have if they have ratings higher than the neighbor students rating
// solution is the the minimum number of candies we need to distribute to each of the students

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> ratings(n), candies(n, 1);
    std::vector<std::pair<int, int>> ratingsWithIndex;
    for (int i = 0; i < n; i++)
    {
        std::cin >> ratings[i];
        ratingsWithIndex.push_back(std::make_pair(ratings[i], i));
    }
    std::sort(ratingsWithIndex.begin(), ratingsWithIndex.end());
    for (auto it : ratingsWithIndex)
    {
        if (it.second > 0 and ratings[it.second] > ratings[it.second - 1])
        {
            candies[it.second] = std::max(candies[it.second], candies[it.second - 1] + 1);
        }
        if (it.second < n - 1 and ratings[it.second] > ratings[it.second + 1])
        {
            candies[it.second] = std::max(candies[it.second], candies[it.second + 1] + 1);
        }
    }
    int sum = 0;
    for (auto it : candies)
    {
        sum += it;
        std::cout << it << ' ';
    }
    std::cout << "\n" << sum << std::endl;

    return 0;
}