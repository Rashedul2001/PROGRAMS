#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(void)
{
    map<string, int> marksmap; // map creation
    marksmap["Rashedul"] = 98; // putting values
    marksmap["Rahman"] = 34;
    marksmap["Rafshan"] = 50;

    map<string, int>::iterator iter; // creating a iterator => type map<string, int>

    for (iter = marksmap.begin(); iter != marksmap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
    }

    return 0;
}