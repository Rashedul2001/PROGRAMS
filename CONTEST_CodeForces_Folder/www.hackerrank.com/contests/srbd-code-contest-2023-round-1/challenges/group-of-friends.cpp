#include <iostream>
#include <set>

using namespace std;

void getAns(set<int> &players, int &count, int num)
{
    if (players.empty())
        return;
    count++;
    for (auto it : players)
    {
        
        if (it % num == 0)
        {

            

            if ((it / num) % num == 1)
            {
                getAns(players, count, it / num);
            }
            players.erase(it);
        }
        else
        {
            getAns(players, count, it);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    set<int> players;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        players.insert(temp);
    }
    int count = 0;
    while (!players.empty())
    {
        getAns(players, count, *(players.begin()));
    }
    cout << count << endl;

    return 0;
}
