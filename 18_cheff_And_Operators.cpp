#include<bits/stdc++.h>
using namespace std;  
int main() {
    int t;
    cin >> t;
    while (t--){
        int f,s;
        cin>>f>>s;
        if(f<s){
            cout<<"<"<<endl;
        }
        else if(f>s){
            cout<<">"<<endl;
        }
        else{
            cout<<"="<<endl;
        }
    }
    return 0;
}