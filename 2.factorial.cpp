#include <bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl '\n'
typedef long long ll;
const long long mod = 1e7+7;

ll fact (int n)
{
    if(n==0)                          
    {
        return 1;
    }
    ll result = (n * (fact(n-1)))%mod;
    return result;
}
int main()
{
    FAST
    cout<<fact(100000)<<nl;
    return 0;
}

   
/* 
    ll n ; cin>>n;
    ll ans =1;
    for(ll i=1;i<=n;i++){
        ans*=i;
        ans%=mod;
    }
    cout<<ans<<nl;
*/