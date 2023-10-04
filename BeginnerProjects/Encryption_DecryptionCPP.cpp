#include <iostream>
#include <string>
#include <limits>
#include <string_view>

using namespace std;

#define Code "MD: Rashedul Hasan"

void getint(int &);
void getencrypted(string_view, string &);
void information();

int main()
{
    information();

    return 0;
}

void getinput(int &input)
{

    std::cin >> input;
    while (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Please Enter Correctly:";
        std::cin >> input;
    }
}

void information()
{
    cout << "This is a Encryption Decryption App "
}

void getint(int &input)
{
    cin >> input;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cin >> input;
    }
}

void getencrypted(string_view base, string &cryptedmessage)
{
}