#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {

    //at first need to store highest possible selling rates
    vector<int> sellPrice(prices.size(), 0);
    sellPrice[prices.size() - 1] = prices[prices.size() - 1];
    for(int i = prices.size() - 2; i >= 0; i--){
        if(sellPrice[i + 1] > prices[i]) sellPrice[i] = sellPrice[i + 1];
        else sellPrice[i] = prices[i];
    }

    int ans = 0;

    for(int i = 0; i < prices.size(); i++){
        ans = max(ans, sellPrice[i] - prices[i]);
    }
    return ans;        
}