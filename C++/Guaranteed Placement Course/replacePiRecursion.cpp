#include <iostream>
#include <string>
using namespace std;

void printReplacedStr(string str)
{
    if (str.empty())
        return;
    if (str[0] == 'p' && str[1] == 'i')
    {
        cout << "3.14";
        printReplacedStr(str.substr(2));
    }
    else
    {
        cout << str[0];
        printReplacedStr(str.substr(1));
    }
}

int main()
{
    string strFile = "pipppipiiiipippiip";
    printReplacedStr(strFile);

    return 0;
}