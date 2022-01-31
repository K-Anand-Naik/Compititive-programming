#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long b_S;
        double g_S;
        cin>>b_S;
        if(b_S<1500){
            g_S = b_S+(b_S*0.1)+(b_S*0.9);
        }
        else if(b_S>=1500){
            g_S = b_S + 500 +(b_S*0.98);
        }    
        cout<<fixed<<setprecision(2)<<g_S<<endl;
    }
    return 0;
}