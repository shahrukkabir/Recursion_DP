#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long long mod = 1e7+7;

ll fact (ll n)
{
    if(n==0)  return 1;
    ll result = ( n * fact(n-1) ) % mod;        // ll result =( (n%mod) * (fact(n-1)%mod) ) % mod;    
    return result;
}

int main(){

    cout<<fact(100000)<<endl; 
    return 0;
}





   
