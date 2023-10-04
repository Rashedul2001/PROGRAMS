#include <iostream>
#include "player.h"
// #include "person.h"

using namespace std;

int main()
{
    Player p1("Basketball");
    cout << p1;
    p1.set_frist_name("John");
    p1.set_last_name("sina");
    cout << p1;

    return 0;
}