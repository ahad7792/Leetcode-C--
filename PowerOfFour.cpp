#include<bits/stdc++.h>
using namespace std;

bool isPowerOfFour(int n) {

    if((n % 4 != 0) && (n != 1) || n == 0) return false;

    if(n == 4 || n == 1) return true;

    return isPowerOfFour(n/4);        
}