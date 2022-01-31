#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int n;
    char sign;
    cin>>t;
    for(int i= 0;i<t;i++){
        cin>>n;
        int Y=0,N=0,I=0;
        for(int j= 0;j<n;j++){
            cin>>sign;
            if(sign=='Y') ++Y;
            else if(sign=='N') ++N;
            else if(sign=='I') ++I;
        }
        if(I) cout<<"INDIAN"<<endl;
        else if(Y) cout<<"NOT INDIAN"<<endl;
        else cout<<"NOT SURE"<<endl;
    }
    return 0;
}