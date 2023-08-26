#include <iostream>
#include <string_view>
using namespace std;

string getSum(string &first, string &second)
{
    string sum{};
    int carry = 0, firstLen = first.length() - 1, secondLen = second.length() - 1;
    while (firstLen >= 0 || secondLen >= 0 || carry)
    {
        int firstDigit = (firstLen >= 0) ? (first[firstLen] - '0') : 0;
        int secondDigit = (secondLen >= 0) ? (second[secondLen] - '0') : 0;
        int tempSum = firstDigit + secondDigit + carry;
        sum.insert(sum.begin(), tempSum % 2 + '0');
        carry = tempSum / 2;
        firstLen--;
        secondLen--;
    }

    return sum;
}
bool isValidBinaryNumber(const string &test)
{
    for (char c : test)
    {
        if (c != '0' && c != '1')
        {

            return false;
        }
    }
    return true;
}

int main()
{
    string first, second;
    cout << "Enter two binary numbers:" << endl;
    cin >> first >> second;
    if (!isValidBinaryNumber(first) || !isValidBinaryNumber(second))
    {
        cout << "Please Enter valid binary number." << endl;
        return 1;
    }
    cout << "Sum is: " << getSum(first, second) << endl;

    return 0;
}