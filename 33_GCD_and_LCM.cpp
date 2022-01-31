#include<bits/stdc++.h>
using namespace std;
long long GCD(long A, long B){
    if(B==0) return A;
    return GCD(B,A%B);
}
long long LCM(long long A, long long B){
    return (A*B)/GCD(A,B);
}

int main(){
    long long t; 
    cin>>t;
    while(t--){
        long long A,B;
        cin>>A>>B;
        cout<<GCD(A,B)<<" "<<LCM(A,B);
    }
    return 0;
}