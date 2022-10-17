#include<bits/stdc++.h>
using namespace std;

int maximumWealth(vector<vector<int>>& nums) {
    int ans=0;
    int m=0;
    int n=nums.size();
    int column=nums[0].size();
    for(int  i=0;i<n;i++)
    {
        m=0;
        for(int j=0;j<column;j++)
        {
            m+=nums[i][j];
            
        }
        ans=max(m,ans);
        
        
    }
    return ans;
    
}