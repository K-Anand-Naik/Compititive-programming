#include<bits/stdc++.h>
using namespace std;
string check(string s) {
    int l = s.length();
    int k;
    if(l%2==0) {
        k = l/2;
    }
    else{
        int x = l/2;
        s.erase(s.begin()+x);
        k = l/2;
    }
    string s1 = s.substr(0,k);
    string s2 = s.substr(k);
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    
    if(s1.compare(s2)==0) return "YES";
    else return "NO";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<check(s)<<endl;
    }
    return 0;
}