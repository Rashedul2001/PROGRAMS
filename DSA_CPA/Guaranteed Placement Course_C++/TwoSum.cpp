#include<iostream>
#include<vector>
#include<unordered_map>

std::vector<int> twoSum(std::vector<int> &arr, int targetSum){
    std::vector<int> result;
    std::unordered_map<int, int> numIndexMap;
    for(int i=0;i<arr.size();i++){
        int complement=targetSum-arr[i];
        if(numIndexMap.find(complement)!=numIndexMap.end()){
            result.push_back(arr[i]);
            result.push_back(complement);
            // or index 
            // result.push_back(numIndexMap[complement]);
            // result.push_back(i);
        }
        numIndexMap[arr[i]]=i;
    }
return result;



}


int main(){

    int n;
    std::cout << "Enter the length of the Array and the Array:";
    std::cin >> n;
    std::vector<int> array(n);
    for(auto &a: array)
        std::cin >> a;
    int targetSum;
    std::cout << "Enter the Target Sum:";
    std::cin>> targetSum;
    std::vector<int> ans = twoSum(array,targetSum);

    for(int i=0;i<ans.size();i+=2)
        std::cout << ans[i] <<' ' << ans[i+1]<<std::endl;




    return 0;
}