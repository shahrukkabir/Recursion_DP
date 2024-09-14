#include <bits/stdc++.h>
using namespace std;
int fact (int n)
{
    cout<<"n : "<<n<<endl;
    if(n==0) return 1;                                                                 
    int result = n * fact(n-1);
    cout<<"n : "<<n<<"  result : "<<result<<endl;
    return result;
}

int main(){
    cout<<fact(5)<<endl;
    return 0;    
}




//T.C:O(N)
//constant factor   
//Number of operation: O(2*N) -> call+Backtrack