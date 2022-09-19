#include<bits/stdc++.h>
#include<iostream>
using std::string

int firstUniqChar(string s) {
    map<string, int> m;
    for(int i = 0; i < s.size(); i++){
        m[s[i]] += 1;
    }

    for(int i = 0; i < s.size(); i++){
        if(m[s[i]] == 1) return i; //returning the index of first non repeating char
    }

    return -1;
};