/* Logic is that
1. when X ends with 0--> then it is divisible by 10;
2. when X ends with 5--> then it need 1 step to make it divisible by 10
    that step is to multiply it with 2. 
3. when X ends with other than 0 and 5 then we can make it a number which will divisible by 10
*/ 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t; 
    while(t--){
        auto X;
        cin>>X;
        if(X%10==0) cout<<0<<endl;
        else if(X%10==5) cout<<1<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}