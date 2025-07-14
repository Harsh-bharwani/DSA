// DP template of fibonacci --> top-down(memoization)
#include <bits/stdc++.h>
using namespace std;

vector<int> dp;

int f(int n)
{
    if(n==0 || n==1) return n;
    if(dp[n]==-1) dp[n] = f(n-1) + f(n-2);
    return dp[n];
}

int fibonacci(int n)
{
    dp.resize(n+1, -1);
    return f(n);
}
