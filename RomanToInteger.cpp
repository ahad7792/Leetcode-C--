#include <bits/stdc++.h>
using namespace std;

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
