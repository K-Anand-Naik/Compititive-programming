#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        double q,p;
        cin>>q>>p;
        if(q>1000){
            p = q*(p-p*0.1);
            cout<<fixed<<setprecision(6)<<p<<endl;
        }
        else if(p<=1000){
            p = q*p;
            cout<<fixed<<setprecision(6)<<p<<endl;
        }
    }
    return 0;
}
