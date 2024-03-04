#include <iostream>
#include <stack>
#include <cmath>

int postfixEvaluation(const std::string &postfixExpression)
{

    std::stack<int> st;
    for (int i = 0; i < postfixExpression.length(); i++)
    {
        if (postfixExpression[i] >= '0' && postfixExpression[i] <= '9')
        {
            st.push(postfixExpression[i] - '0');
        }
        else
        {
            int operand2 = st.top(); // carefully see which order we are going and which operand will be first and second
            st.pop();
            int operand1 = st.top();
            st.pop();
            switch (postfixExpression[i])
            {
            case '+':
                st.push(operand1 + operand2);
                break;
            case '-':
                st.push(operand1 - operand2);
                break;
            case '/':
                st.push(operand1 / operand2);
                break;
            case '*':
                st.push(operand1 * operand2);
                break;
            case '^':
                st.push(std::pow(operand1, operand2));
                break;
            default:
                std::cout << "Invalid Expression" << std::endl;
                exit(1);
                break;
            }
        }
    }

    return st.top();
}

int main()
{
    // std::cout << postfixEvaluation("46+2/5*7+");
    std::cout << postfixEvaluation("234*+");

    return 0;
}