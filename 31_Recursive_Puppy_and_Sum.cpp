#include<bits/stdc++.h>
using namespace std;
int sum(int D,int N){
    if(D==0){
        return N;
    }
    N = N*(N+1)/2;
    D--;
    return sum(D,N);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int d,n;
        cin>>d>>n;
        cout<<sum(d,n)<<endl;
    }
    return 0;
}