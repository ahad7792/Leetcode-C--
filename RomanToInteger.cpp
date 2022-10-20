#include <bits/stdc++.h>
using namespace std;
using std::map;

int romanToInt(string s)
{
    int answer = 0, num = 0, prev = 0;

    for (int j = s.length() - 1; j >= 0; j--)
    {
        switch (s[j])
        {
        case 'I':
            num = 1;
            break;
        case 'V':
            num = 5;
            break;
        case 'X':
            num = 10;
            break;
        case 'L':
            num = 50;
            break;
        case 'C':
            num = 100;
            break;
        case 'D':
            num = 500;
            break;
        case 'M':
            num = 1000;
            break;
        }
        if (num < prev)
        {
            answer -= num;
        }
        else
        {
            answer += num;
        }
        prev = num;
    }
    return answer;
}

map<char, int> romanToIntMap{
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}};

int romanToIntRe(string s)
{ // use recursion
    // base case:
    if (s.size() == 1)
    {
        return romanToIntMap[s[0]];
    }
    // recursion
    int l = romanToIntMap[s[0]];
    int r = romanToIntMap[s[1]];
    if (l < r)
    {
        return romanToIntRe(s.substr(1)) - l;
    }
    else
    {
        return romanToIntRe(s.substr(1)) + l;
    }
}
