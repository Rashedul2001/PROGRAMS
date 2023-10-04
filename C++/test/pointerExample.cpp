#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
    const char *string1{"My name is MD Rashedul Hasan, AzaRbaizan"};
    char string2[] = "Rashedul";

    cout << "Output is: " << strcmp(string1, string2) << endl;
    cout << "strncmp: " << strncmp(string1, string2, 2);

    char single{'R'};

    const char *pointer{nullptr};

    pointer = strchr(string1, single);
    int iteration{};
    cout << "Pointer is: " << pointer << endl;

    pointer = string1;
    while ((pointer = strchr(pointer, single)) != nullptr)
    {
        cout << "Found R and the string is: " << pointer << endl;
        iteration++;
        pointer++;
    }

    return 0;
}