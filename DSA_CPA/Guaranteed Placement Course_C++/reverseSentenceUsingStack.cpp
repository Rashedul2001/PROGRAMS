#include <iostream>
#include <string>
#include <stack>

std::string reverseSentence(const std::string &sentence)
{
    std::stack<std::string> st;
    for (int i = 0; i < sentence.length(); i++)
    {

        std::string word{};
        while (sentence[i] != ' ' && i < sentence.length())
        {
            word += sentence[i];
            i++;
        }
        st.push(word);
    }
    std::string returnString{};
    while (!st.empty())
    {
        returnString += st.top() + " ";
        st.pop();
    }
    return returnString;
}
int main()
{

    std::string mainString = "I love Bangladesh";
    std::cout << reverseSentence(mainString) << std::endl;

    return 0;
}
