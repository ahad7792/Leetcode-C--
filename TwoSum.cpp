#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {

    vector<int> ans;
    for(int i = 0; i < nums.size(); i++){
        for(int j = i + 1; j < nums.size(); j++){
            if(nums[i] + nums[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;    
}
//O(n) solution
vector<int> twoSum2(vector<int>& nums, int target) {

    map<int, int> map;

    for(int i = 0; i < nums.size(); i++){
        int x = nums[i];
        int diff = target - x;
        if(map.find(diff) != map.end()){
            return {i, map[diff]};
        }
        map[nums[i]] = i;
    }

    return {-1, -1};
     
}
