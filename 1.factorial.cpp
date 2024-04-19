#include <bits/stdc++.h>
using namespace std;
#define FAST ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl '\n'

int fact (int n)
{
    // cout<<"n : "<<n<<nl;
    if(n==0)                          
    {
        return 1;
    }
    int result = n * (fact(n-1));
    // cout<<"result : "<<result<<nl;
    return result;
}
int main()
{
    FAST
    cout<<fact(5)<<nl;
    return 0;
}

   
