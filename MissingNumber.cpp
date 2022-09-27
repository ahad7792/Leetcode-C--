#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>& nums) {

    int fullSum = 0, numSum = 0;
    for(int i = 0; i < nums.size() + 1; i++){
        fullSum += i;
    }

    for(int i = 0; i < nums.size(); i++){
        numSum += nums[i];
    }

    return fullSum - numSum;
        
}

int main(int argc, char const *argv[])
{
    vector<int> nums = {3,0,1};
    cout << missingNumber(nums) << endl;
}
