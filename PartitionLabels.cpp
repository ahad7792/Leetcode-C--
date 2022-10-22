#include <bits/stdc++.h>
using namespace std;

vector<int> partitionLabels(string s)
{
    vector<int> lastind(26, -1);
    int i, n = s.length();
    for (i = 0; i < n; i++)
    {
        lastind[s[i] - 'a'] = i;
    }
    vector<int> ans;

    int start = 0;
    int end = 0;

    for (int i = 0; i < n; i++)
    {
        end = max(lastind[s[i] - 'a'], end);
        if (end == i)
        {
            ans.push_back(end - start + 1);
            start = end + 1;
        }
    }

    return ans;
}