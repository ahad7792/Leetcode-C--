#include<bits/stdc++.h>
using namespace std;

//Brute force approach O(nlogn)
vector<int> countBits(int n) {

    vector<int> ans(n + 1, 0);
    for(int i = 0; i <= n; i++){
        int num = i;
        int count = 0;
        //O(logn)
        while(num){
            if(num % 2 == 1) count++; // checking the last set bit
            num = num / 2; // shifting right
        }

        ans[i] = count;
    }

    return ans;

}
//O(n)
vector<int> countBits2(int n) {

    vector<int> ans(n + 1, 0);
    for(int i = 0; i <= n; i++){
        if(i % 2 == 0) ans[i] = ans[i / 2]; //if we left shift a number we get half of the number with same number of bits
        else ans[i] = ans[i / 2] + 1; // for odd number we need to add one more bits
    }

    return ans;

}

