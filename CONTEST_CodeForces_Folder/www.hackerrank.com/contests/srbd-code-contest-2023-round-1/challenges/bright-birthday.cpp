
// need to learn about mask 


#include <iostream>
#include <map>
#include <set>
#include <string>

using namespace std;

bool compare(map<char, int> &total, string comp)
{
    int len = comp.length();
    for (auto it : comp)
    {
        if (total[it] > 0)
        {
            len--;
        }
    }
    if (len)
    {
        return false;
    }
    return true;
}
void deleteIt(map<char, int> &total, string str)
{
    for (char it : str)
        total[it]--;
}

int main()
{
    set<string> c = {"blue",
                     "green",
                     "yellow",
                     "red",
                     "purple",
                     "orange",
                     "pink",
                     "grey",
                     "cyan",
                     "brown",
                     "ash",
                     "silver",
                     "gold",
                     "white",
                     "black"};

    int t;
    cin >> t;
    while (t--)
    {
        int count = 0;

        map<char, int> total;
        string s;
        cin >> s;
        for (char it : s)
        {
            total[it]++;
        }
        for (auto it : c)
        {
            while (compare(total, it))
            {
                count++;
                deleteIt(total, it);
            }
        }
        cout << count << endl;
    }
    return 0;
}