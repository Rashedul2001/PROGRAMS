#include<iostream>
#include<vector>
#include<stack>



int main(){
    std::vector<int> stocks{100,80,60,70,65,75,85};// answer is for consecutive days not just the total number of days
    std::vector<int> result;

    std::stack<std::pair<int,int> > st;
    for(auto stock: stocks){
        int days=1;
        while(!st.empty() and st.top().first<=stock){
            days+=st.top().second;
            st.pop();
        }
        st.push({stock,days});
        result.push_back(days);
    }



    for(auto re: result)
        std::cout << re << ' ';





    return 0;
}