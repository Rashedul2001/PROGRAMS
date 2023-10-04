#include <iostream>
#include <string>

using namespace std;

int main()
{
    string fullname = "MD: Rashedul Hasan", empty, withOther{fullname}, stringButcroped{"Hello World", 5};
    string multiply{5, 'R'}, Greatings{"Hello, How are you?"};
    string GreatingCut{Greatings, 7, 12};

    cout << "Full name: " << fullname << endl;
    cout << "WithOther: " << withOther << endl;
    cout << "stringButcroped: " << stringButcroped << endl;
    cout << "multiply: " << multiply << endl;
    cout << "GreatingCut: " << GreatingCut << endl;
}