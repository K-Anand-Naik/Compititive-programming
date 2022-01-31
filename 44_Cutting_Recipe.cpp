#include<bits/stdc++.h>
using namespace std;
int GCD(long a, long b){
    if(b == 0) return a;
    else return GCD(b, a%b);
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
        int G = GCD(a[0], a[1]);
        for(int i = 2; i<n; i++){
            G = GCD(G, a[i]);
        }
        for(int i = 0; i<n;i++){
            a[i] = a[i]/G;
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
    return 0; 
}