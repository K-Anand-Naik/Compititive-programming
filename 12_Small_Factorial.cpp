#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[200];
        a[0] = 1;
        int m = 1;
        for(int i = 1; i <= n; i++){
            int temp = 0;
            for(int index = 0; index < m; index++){
                int x = i*a[index] + temp;
                a[index] = x%10;
                temp = x/10;
            }
            while(temp>0){
                a[m++] = temp % 10;
                temp = temp/10;
            }
        }
        for(int i = m-1;i>=0;i--){
            cout << a[i];
        }
        cout <<endl;
    }
    return 0;
}