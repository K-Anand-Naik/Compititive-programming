#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string s1, s2;
        int n = s.length();
        for(int i=0;i<n/2;i++){
            s1+=s[i];
            s2+=s[n-i-1];
        }
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        
        if(s1 == s2){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}