#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    
    int count = 0;
    for(int i = 0; i < nums.size() - 1; i++){
        if(nums[i] != nums[i + 1]){
            nums[count++] = nums[i];
        }
    }
    nums[count++] = nums[nums.size() - 1];
    return count;        
}

int main(int argc, char const *argv[])
{
    vector<int> nums = {1,1,2};
    cout << removeDuplicates(nums) << endl;
}
