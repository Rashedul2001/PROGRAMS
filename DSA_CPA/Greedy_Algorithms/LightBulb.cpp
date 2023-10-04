// the array will contain only 0 or 1  the objective is the make the array only containing 1's
// if we flip a bit 0 to 1 the "cost" will increase and the all the bits or light to left including the current one
// will flip its status 0 will become 1 and 1 will become 0

//  the goal is to find out what is the minimum const we need to make it happen

// greedy method
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // vector<bool> bulbs(n); for this type of boolean vector we cannot use ranged based for loops
    vector<int> bulbs(n);
    for (auto &it : bulbs)
    {
        cin >> it;
    }
    int cost = 0;
    // every positive switching will make the bulb to the initial state and vice versa
    // if the bulb state is 0 we have flip it and cost will increase and vice versa
    // see the video for more details

    for (auto &it : bulbs)
    {
        if (cost & 1)
            it = !it;
        else
            it = it;
        if (it & 1)
        {
            continue;
        }
        else
            cost++;
    }
    cout << cost << endl;

    return 0;
}