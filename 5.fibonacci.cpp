#include <bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl '\n'

int fib (int n){
    // cout<<n<<nl;
    if(n==0 || n==1) return n;
    int res = fib(n-1) + fib(n-2);
    return res;
}

int main()
{
    FAST
    cout<<fib(6)<<nl;

    return 0;
}

   
//O(2^n)