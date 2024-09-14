#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long long mod = 1e7+7;

ll fact[100123];
int main()
{
    fact[0]=1;
    for(int i=1;i<=100000;i++){      //precalculation
        fact[i]=(i*fact[i-1])%mod;
    }

    
    int t; cin>>t;
    while(t--){
        ll n; cin>>n;
        cout<<fact[n]<<endl;
    }
    
    return 0;
}

//t*n