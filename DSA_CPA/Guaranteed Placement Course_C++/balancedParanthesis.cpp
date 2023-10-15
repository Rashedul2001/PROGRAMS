#include <iostream>
#include <stack>

int main()
{
    std::string parenthesis;
    std::cin >> parenthesis;
    std::stack<char> st;
    bool ans = true;
    for (auto c : parenthesis)
    {
        if (c == '(' or c == '{' or c == '[')
        {
            st.push(c);
        }
        else if (c == ')' and !st.empty() and st.top() == '(')
        {
            st.pop();
        }
        else if (c == '}' and !st.empty() and st.top() == '{')
        {
            st.pop();
        }
        else if (c == ']' and !st.empty() and st.top() == '[')
        {
            st.pop();
        }
        else
        {
            ans = false;
            break;
        }
    }
    if (ans)
    {
        std::cout << "The Expression is Balanced." << std::endl;
    }
    else
    {
        std::cout << " The Expression is not Balanced." << std::endl;
    }

    return 0;
}
