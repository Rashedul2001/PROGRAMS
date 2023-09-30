#include <iostream>
#include <stack>

int precedenceOf(const char ch)
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
    {
        return 0; // sometime here will come "(" or ")" parenthesis when called precedenceOf(st.top());
    }
}
std::string infixToPostfix(const std::string_view infixExpression)
{

    std::string postfixExpression;
    std::stack<char> st;

    for (int i = 0; i < infixExpression.length(); i++)
    {
        if ((infixExpression[i] >= 'a' && infixExpression[i] <= 'z') || (infixExpression[i] >= 'A' && infixExpression[i] <= 'Z') || (infixExpression[i] >= '0' && infixExpression[i] <= '9'))
        {
            postfixExpression += infixExpression[i];
        }
        else if (infixExpression[i] == '(')
        {
            st.push(infixExpression[i]);
        }
        else if (infixExpression[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                postfixExpression += st.top();
                st.pop();
            }
            if (!st.empty())
                st.pop();
        }
        // few times I got space included examples from online, to counter it I put an if statement.
        else if (infixExpression[i] == ' ')
        {
            continue;
        }
        else
        {
            while (!st.empty() && (precedenceOf(infixExpression[i]) <= precedenceOf(st.top())))
            {
                postfixExpression += st.top();
                ;
                st.pop();
            }
            st.push(infixExpression[i]);
        }
    }
    while (!st.empty())
    {
        postfixExpression += st.top();
        st.pop();
    }
    return postfixExpression;
}

int main()
{
    std::cout << infixToPostfix("a+b*c") << std::endl;
    std::cout << infixToPostfix("((A + B) - C * (D / E)) + F") << std::endl;

    return 0;
}