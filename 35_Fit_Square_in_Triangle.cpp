#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int B;
        cin>>B;
        B = B-2; //To reduce the overflow, for right fitting of the squares
        B = B/2;
        B = B*(B+1)/2;
        cout<<B<<endl;
    }
    return 0;
}