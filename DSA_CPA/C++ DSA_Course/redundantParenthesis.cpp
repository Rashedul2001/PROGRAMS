#include <iostream>
#include <stack>

bool checkOperator(char op)
{
    if (op == '+' || op == '-' || op == '*' || op == '/')
    {
        return true;
    }
    else
        return false;
}

int main()
{
    // std::string statement{"((a+b))"};
    std::string statement{"(a*(a+b))"};
    int len = statement.length();
    std::stack<char> st;
    bool ans = false;
    for (int i = 0; i < len; i++)
    {
        if (checkOperator(statement[i]) || statement[i] == '(')
            st.push(statement[i]);
        else if (statement[i] == ')')
        {
            if (st.empty() || st.top() == '(')
            {
                ans = true;
                break;
            }
            while (checkOperator(st.top()))
                st.pop();
            st.pop();
        }
    }
    if (ans)
        std::cout << "Statement has Redundant parenthesis" << std::endl;
    else
        std::cout << "Statement doesn't  have Redundant parenthesis" << std::endl;

    return 0;
}
