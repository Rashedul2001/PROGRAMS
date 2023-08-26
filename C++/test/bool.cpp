#include <iostream>
using namespace std;

int main(void)
{
    bool red_light{true};
    bool green_light{false};
    cout << "red_light=" << red_light << "\ngreen_light=" << green_light << endl;
    cout << boolalpha << "red_light=" << red_light << "\ngreen_light" << green_light << endl;

    return 0;
}