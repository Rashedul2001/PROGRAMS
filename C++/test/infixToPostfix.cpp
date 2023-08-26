#include <iostream>
#include <string>
#include <stack>
std::string convert(std::string infix)
{
    std::stack<char> s;
    std::string postfix{};
    char ch;
    s.push('(');
    infix
}
int main()
{
    std::string infixExpression, postfixExpression;
    int choice;
    do
    {
        std::cout << "Enter your infix expression:";
        std::cin >> infixExpression;
        postfixExpression = convert(infixExpression);
        std::cout << "Do you want to Enter another INFIX Expresssion(1/0)?";
        std::cin >> choice;
        return 0;
    } while (choice == 1);
}