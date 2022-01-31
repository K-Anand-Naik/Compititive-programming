#include<bits/stdc++.h>
using namespace std;
int grade(long H, float C, long T){
    if(H>50 && C<0.7 && T>5600){
        return 10;
    }
    else if(H>50 && C<0.7){
        return 9;
    }
    else if(C<0.7 && T>5600){
        return 8;        
    }
    else if(H>50 && T>5600){
        return 7;            
    }
    else if(H>50 || C<0.7 || T>5600){
        return 6;
    }
    else{
        return 5;
    }
}

int main() {
    int t;
    cin>>t;
    while(t--){
        long h,t;
        float c;
        cin>>h>>c>>t;
        cout<<grade(h,c,t);
    }
    return 0;
}