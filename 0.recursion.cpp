#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    // cout<<"n : "<<n<<endl;
    if(n==0) return 0;
    int res =  sum(n-1)+n;
    // cout<<"n : "<<n<<"  result : "<<result<<endl;
    return res;
}

int main(){

    int x = sum(5);
    cout<<x<<endl;

    return 0;
}

//sum(5)=sum(4)+5
//sum(4)=sum(3)+4