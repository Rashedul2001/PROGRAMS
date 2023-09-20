#include <iostream>
using namespace std;
string moveX(string x)
{
    if (x.empty())
        return "";
    char c = x.at(0);
    string str = moveX(x.substr(1));
    if (c == 'x')
        str = str + 'x';
    else
        str = c + str;
    return str;
}

int main()
{
    cout << moveX("axxbdadsxttwxxtwexxxxtttwwwwkkkk");

    return 0;
}
