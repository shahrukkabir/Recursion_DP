#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
typedef long long ll;
const long long mod = 1e7+7;

ll fact[100123];
int main()
{
    int t; cin>>t;
    fact[0]=1;
    for(int i=1;i<=100000;i++){
        fact[i]=(i*fact[i-1])%mod;
    }
    while(t--){
        ll n; cin>>n;
        cout<<fact[n]<<nl;
    }
    
    return 0;
}
//t*n