#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++) {
        int n;
        cin>>n;
        int sqr = sqrt(n);
        cout << fixed <<setprecision(2) <<sqr<<endl;
    }
    return 0;
}