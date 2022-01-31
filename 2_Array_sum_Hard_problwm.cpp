#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    size_t t;
    unsigned long long int input;
    unsigned long long int sum[100];

    cin>>t;
    for (int i =0; i < t; i++){
        cin>>n;
        sum[i] = 0;
        for(int j=0; j<n; j++){
            cin>>input;
            sum[i] += input;
        }
    }
    for (int i =0; i < t; i++){
        cout<<sum[i]<<endl;
    }
    return 0;
}