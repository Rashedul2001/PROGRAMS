#include <iostream>
#include <queue>

int main()
{

    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;
        std::priority_queue<std::pair<std::pair<int, int>, int>> list;
        for (int i = 0; i < n; i++)
        {
            int s, e;
            std::cin >> s >> e;
            list.push(std::make_pair(std::make_pair(e, s), i));
        }
        std::pair<std::pair<int, int>, int> temp = list.top();
        list.pop();

        if (list.top() == temp || temp.second != 0)
        {
            std::cout << -1 << std::endl;
            continue;
        }
        else
        {

            std::cout << temp.first.second << std::endl;
        }
    }

    return 0;
}