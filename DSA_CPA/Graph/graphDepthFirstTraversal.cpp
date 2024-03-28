#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>

void depthFirstTraversalPrint(const std::unordered_map<char, std::vector<char>> &graph, const char source)
{
    std::stack<char> st;
    st.push(source);

    while (!st.empty())
    {
        char current = st.top();
        st.pop();
        std::cout << current << std::endl;
        for (auto neighbor : graph.at(current))
            st.push(neighbor);
    }
}

int main()
{
    std::unordered_map<char, std::vector<char>> graph = {
        {'a', {'c', 'b'}},
        {'b', {'d'}},
        {'c', {'e'}},
        {'d', {'f'}},
        {'e', {}},
        {'f', {}},
    };

    depthFirstTraversalPrint(graph, 'a');

    return 0;
}