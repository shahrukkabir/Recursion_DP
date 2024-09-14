#include <bits/stdc++.h>
using namespace std;

int fib (int n){

    if(n==0 || n==1) return n;
    int res = fib(n-1) + fib(n-2);
    return res;
    
}

int main(){

    cout<<fib(6)<<endl;

    return 0;
}

   
//O(2^n)



