#include<iostream>
#include<vector>
#include<string>

int main(){
    // .x...xx.xxx......xx.x.xxx.
    std::string s;
    std::cin >> s;
    std::vector<int> pos;
    for (int i = 0; i < s.length(); i++){
        if (s[i] == 'x'){
            pos.push_back(i);
        }
    }
    int mid = pos.size()/2;
    




    return 0;
}