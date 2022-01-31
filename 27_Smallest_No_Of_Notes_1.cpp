#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<long long> p={1,2,5,10,50,100};
    while(t--){
        int n;
        int counter = 0;
        cin>>n;
        int j = 5; //indices of the vector 
        while(n){
            counter = counter+n/p[j];
            n = n%p[j];
            j--;
        }
        cout<<counter<<endl;
    }
    return 0;
}