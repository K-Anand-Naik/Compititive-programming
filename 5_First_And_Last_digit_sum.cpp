#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        int l = n%10;
        int f = 0;
        while(n>0){
            f = n%10;
            n = n/10;
        }
        cout<<f+l<<endl;
    }
    return 0;
}