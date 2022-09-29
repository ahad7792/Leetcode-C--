#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n == 1) return 1;
    if(n == 2) return 2;
    return fib(n - 1) + fib(n - 2);
}

vector<int> pattern(vector<int> arr){

    vector<int> ans(arr.size(), 0);
    for(int i = 0; i < arr.size(); i++){
        int fibo = fib(arr[i]);
        ans[i] = fibo;
    }

    return ans;

}



int main(int argc, char const *argv[])
{
    vector<int> num = {1, 2, 3, 4, 5};
    vector<int> ans = pattern(num);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << endl;
    }
    
}
