#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
typedef long long ll;
const   long long  mod = 1e7+7;
const   long long  mx  = 1e5+123;

ll dp[mx];

ll fact (int n)
{
    if(n==0) return 1;
    if(dp[n]!=0) return dp[n];
    ll result = (n * (fact(n-1)))%mod;
    cout<<n <<" " << result <<nl;
    return dp[n] = result;
}

int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<fact(n)<<nl;
    }
    return 0;
}
//O(n)
//overlapping sub problem
//divide and conquer method
//memorization