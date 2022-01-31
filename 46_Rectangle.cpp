#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int r[4];
        for(int i = 0; i<4; i++){
            cin>>r[i];
        }
        sort(r,r+4);
        if(r[0]==r[1] && r[2]==r[3]) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}