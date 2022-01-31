#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int t;
    cin>>t;
    while (t--) {
        ll n,k;
        cin>>n>>k;
        ll rem;
        vector<int> v;
        for(int i = 1; i<=k;i++) {
            rem = n%i;
            v.push_back(rem);
        }
        cout<<*max_element(v.begin(),v.end())<<endl;
    }
    return 0;
}