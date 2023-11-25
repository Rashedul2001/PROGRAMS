#include <iostream>

void firstPatternMatching(const std::string &mainStr, const std::string &pattern)
{
    int n = mainStr.length();
    int m = pattern.length();
    for (int i = 0; i <= n - m; i++)
    {
        int j;
        for (j = 0; j < m; j++)
        {
            if (mainStr[j + i] != pattern[j])
            {
                break;
            }
        }
        if (j == m)
            std::cout << "Pattern found at position: " << i + 1 << std::endl;
    }
}

int main()
{
    std::string mainStr = "AABAACAADAABAABA";
    std::string pattern = "AABA";
    firstPatternMatching(mainStr, pattern);

    return 0;
}
