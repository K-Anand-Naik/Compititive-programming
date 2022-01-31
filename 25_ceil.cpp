#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,p;
    cin >> t;
    int price[12] = {1,2,4,8,16,32,64,128,256,512,1024,2048};
    for(int i=0;i<t;i++){
        cin>>p; 
        int counter = 0, j = 11;
        while(p){
            counter = counter + p/price[j];
            p = p%price[j];
            j--; 
        }
        cout<<counter<<endl;
    }
    return 0;
}