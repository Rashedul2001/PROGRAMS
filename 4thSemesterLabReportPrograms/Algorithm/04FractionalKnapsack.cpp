#include <iostream>
#include <vector>
#include <algorithm>

struct Item
{
    int weight;
    int value;

    Item(int w, int v) : weight(w), value(v) {}
};

bool compare(Item a, Item b)
{
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;
}

double fractionalKnapsack(int W, std::vector<Item> &items)
{
    std::sort(items.begin(), items.end(), compare);

    int currentWeight = 0;
    double finalValue = 0.0;

    for (const auto &item : items)
    {
        if (currentWeight + item.weight <= W)
        {
            currentWeight += item.weight;
            finalValue += item.value;
        }
        else
        {
            int remainingWeight = W - currentWeight;
            finalValue += item.value * ((double)remainingWeight / item.weight);
            break;
        }
    }

    return finalValue;
}

int main()
{
    int W = 50;

    std::vector<Item> items = {
        Item(10, 60),
        Item(20, 100),
        Item(30, 120)};

    double maxValue = fractionalKnapsack(W, items);

    std::cout << "Maximum value we can obtain = " << maxValue << std::endl;

    return 0;
}
