#include<bits/stdc++.h>
using namespace std;

int findJudge(int n, vector<vector<int>>& trust) {
    vector<int> count(n + 1, 0); //the person count starts from 1, that's why size n+1

    for(int i = 0; i < trust.size(); i++){
        count[trust[i][0]]--;
        count[trust[i][1]]++;
    }

    for(int i = 1; i <= n; i++){ //person count starts from 1
        if(count[i] == n - 1) return i;
    }      
    return -1;
}