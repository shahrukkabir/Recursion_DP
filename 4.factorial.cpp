#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const   int  mod = 1e7+7;
const   int  mx  = 1e5+123;

ll dp[mx];

ll fact (int n)
{
    if(n==0) return 1;
    if(dp[n]!=0) return dp[n];
    ll result = (n * (fact(n-1)))%mod;
    return dp[n] = result;
}

int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cout<<fact(n)<<endl;
    }
    return 0;
}


//O(n)
//overlapping sub problem
//divide and conquer method
//memorization