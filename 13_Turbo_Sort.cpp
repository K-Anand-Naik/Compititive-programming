#include<bits/stdc++.h>
using namespace std;
int arr[1000001] = {0};
int main(){
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        arr[n]++;
    }
    for(int i = 0; i<1000001;i++){
        while(arr[i]>0){
            cout<<i<<endl;
            arr[i]--;
        }
    }
    return 0;
}