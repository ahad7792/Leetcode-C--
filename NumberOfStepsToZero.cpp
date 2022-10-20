#include <bits/stdc++.h>
using namespace std;

int numberOfSteps(int num)
{
    int steps = 0;
    while (num > 0)
    {
        if (num % 2 == 0)
            num = num / 2;
        else
            num--;
        steps++;
    }
    return steps;
}

//with recursion
int steps = 0;
int numberOfStepsRe(int num)
{
    if(num <= 1) return num;
    if(num % 2 == 0) return steps + numberOfStepsRe(num / 2) + 1;
    else return steps + numberOfStepsRe(num - 1) + 1;
}