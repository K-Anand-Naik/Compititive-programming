#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int temp = n;
        int reverse = 0;
        while(temp){
            reverse = reverse*10+temp%10;
            temp = temp/10;
        }
        if(reverse == n){
            cout<<"wins"<<endl;
        }
        else{
            cout<<"loses"<<endl;
        }
    }
    return 0;
}