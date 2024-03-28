#include <iostream>
#include <vector>

std::vector<std::string> ans;

void generate(std::string &instance, int opening, int closing)
{
    if (opening == 0 and closing == 0)
    {
        ans.push_back(instance);
        return ;
    }
    if (opening > 0)
    {
        instance.push_back('(');
        generate(instance, opening - 1,closing);
        instance.pop_back();
    }

    if ( closing > 0 and closing > opening)
    {
        instance.push_back(')');
        generate(instance, opening,closing - 1);
        instance.pop_back();
    }
}


int main()
{
    int n;
    std::cin >> n;
    std::string instance;
    generate(instance, n, n);
    for (auto i : ans)
    std::cout << i << std::endl;

    return 0;
}