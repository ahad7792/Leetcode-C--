#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    vector<int> res(nums.size());
    res[0] = 1;
    res[nums.size() - 1] = 1;
    int leftProduct = 1, rightProduct = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        res[i] = leftProduct;
        leftProduct *= nums[i];
    }
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        res[i] *= rightProduct;
        rightProduct *= nums[i];
    }
    return res;
}