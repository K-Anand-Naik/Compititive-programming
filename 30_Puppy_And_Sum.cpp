#include<bits/stdc++.h>
using namespace std;
int sum(int D, int N){
    D = D+N;
    return D;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int D,N;
        cin>>D>>N; 
        for(int i = 1;i<=D;i++){
            int sum = 0;
            for(int j = 1;j<=N;j++){
                sum = sum+j;
            }
            N = sum;
        }       
        cout<<N<<endl;
    }
}