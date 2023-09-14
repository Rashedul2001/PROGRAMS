#include <iostream>
#include <stack>
#include <string>
#include <cmath>
int prefixEvaluation(const std::string &prefixExpression)
{

    std::stack<int> st;
    for (int i = prefixExpression.length() - 1; i >= 0; i--)
    {

        if (prefixExpression[i] >= '0' && prefixExpression[i] <= '9')
        {
            st.push(prefixExpression[i] - '0');
        }
        else
        {
            int operand1 = st.top(); // this will be changed in postfix evaluation
            st.pop();
            int operand2 = st.top(); // have to be careful about what will be the first and second operand
            st.pop();

            switch (prefixExpression[i])
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
    std::cout << prefixEvaluation("-+7*45+20");

    return 0;
}