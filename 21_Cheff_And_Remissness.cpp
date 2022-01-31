#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int a,b;
        cin >> a >> b;
        int mn = max(a,b);
        int mx = a+b;
        cout << mn << " " <<mx<<endl;
        
    }
    return 0;
}
