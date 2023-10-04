#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string name;
    cout << "Enter your Full Name" << endl;
    getline(cin, name);
    cout << "Your name is: " << name << endl;
    return 0;
}