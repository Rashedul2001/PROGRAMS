#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n;
    std::cin >> n;
    std::vector<std::pair<int, int>> startEndMeeting;
    while (n--)
    {
        int start, end;
        std::cin >> start >> end;
        startEndMeeting.push_back(std::make_pair(start, 1));
        startEndMeeting.push_back(std::make_pair(end, -1));
    }
    std::sort(startEndMeeting.begin(), startEndMeeting.end());
    int maxRoom = 0, count = 0;
    for (auto it : startEndMeeting)
    {
        count += it.second;
        maxRoom = std::max(maxRoom, count);
    }
    std::cout << maxRoom << std::endl;

    return 0;
}