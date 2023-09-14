#include <iostream>
#include <algorithm>
#include <stack>

int precedenceOf(char ch)
{
    if (ch == '^')
    {
        return 3;
    }
    else if (ch == '*' || ch == '/')
    {
        return 2;
    }
    else if (ch == '+' || ch == '-')
    {
        return 1;
    }
    else
        return 0;
}

std::string infixToNPostfix(std::string infix)
{
    std::stack<char> st;
    std::string NPostfix;

    for (int i = 0; i < infix.length(); i++)
    {

        if (isalpha(infix[i]) || isdigit(infix[i]))
        {
            NPostfix += infix[i];
        }
        else if (infix[i] == '(')
        {
            st.push(infix[i]);
        }
        else if (infix[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                NPostfix += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            if (infix[i] == '^')
            {
                while (!st.empty() && precedenceOf(st.top()) >= precedenceOf(infix[i]))
                {
                    NPostfix += st.top();
                    st.pop();
                }
                st.push(infix[i]);
            }
            else
            {
                while (!st.empty() && precedenceOf(st.top()) > precedenceOf(infix[i]))
                {
                    NPostfix += st.top();
                    st.pop();
                }
                st.push(infix[i]);
            }
        }
    }

    while (!st.empty())
    {
        NPostfix += st.top();
        st.pop();
    }
    return NPostfix;
}

std::string_view infixToPrefix(std::string infix)
{
    std::reverse(infix.begin(), infix.end());
    for (int i = 0; i < infix.length(); i++)
    {
        if (infix[i] == '(')
        {
            infix[i] = ')';
        }
        else if (infix[i] == ')')
        {
            infix[i] = '(';
        }
    }
    infix = infixToNPostfix(infix);
    std::reverse(infix.begin(), infix.end());
    return infix;
}

int main()
{
    std::string infixExpression{};

    std::cout << infixToPrefix("x+y*z/w+u");

    return 0;
}