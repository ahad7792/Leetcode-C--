#include<bits/stdc++.h>
using namespace std;

bool repeatedSubstringPattern(string s) {
    int n = s.size();

    for(int l = n/2; l >= 1; l--){
        if(n % l == 0){ // length must be a divisor of size, or there will be an extra char
            int i = 0;
            while(i + l < n && s[i] == s[i + l]){ 
                i++; //expanding the window
            }
            if(i + l == n) return true;
        }
    }

    return false;
}