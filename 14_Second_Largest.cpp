#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    int arr[3];
    cin >> t;
    while(t>0){
        t--;
        for(int i = 0; i < 3; i++){
            cin>>arr[i];
        }
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < i+1; j++){
                if(arr[i] > arr[j]){
                    // int temp;
                    // temp = arr[i];  
                    // arr[i] = arr[j];
                    // arr[j] = temp;
                    swap(arr[i], arr[j]);
                }
            }
        }
        cout<<arr[1]<<endl;
    }
}
