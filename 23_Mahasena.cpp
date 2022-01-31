#include<bits/stdc++.h>
using namespace std; 
int main(){
    int N;
    cin >> N;
    int c1 = 0;
    int c2 = 0;
    while(N--){
        int A;
        cin >> A;
        if(A%2==0)
            c1+=1;
        else
            c2+=1;
    }
    if(c1>c2)
        cout << "READY FOR BATTLE";
    else
        cout<<"NOT READY";
    
    return 0;
}