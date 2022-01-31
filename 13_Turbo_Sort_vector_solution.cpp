#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
    int t ;
    cin >> t;
    vector<ll> v;
    while(t--){
        int n;
        cin >> n;
        v.push_back(n);
    }
    sort(v.begin(),v.end());
    for(int x=0;x<v.size();x++) 
        cout << v[x] << '\n';
}