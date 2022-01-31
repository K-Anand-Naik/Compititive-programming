#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        vector<vector<int>>vec(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for (int j=0;j<=i;j++){
                cin>>vec[i][j];
            }
        }
        
        for(int i=n-2;i>=0;i--){
            for (int j=0;j<=i;j++){
                if(vec[i+1][j] > vec[i+1][j+1]){
                    vec[i][j] += vec[i+1][j];
                } else {
                    vec[i][j] += vec[i+1][j+1];
                }
            }
        }
        
        std::cout << vec[0][0] << std::endl;
    }
    return 0;
}