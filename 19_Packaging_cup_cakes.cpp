//packaging cupcakes
// tha max number of cupcakes can be eaten = (N/2+1)
// N = Number of cupcakes

// A = number of cupcakes in a package = A/2 + 1
// i.e, if A = 1 --> we get 1 cake in each package 
// or if A = 2 --> we get 2 cakes in each package, so choose A such that A/2+1

#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--){
        int N;
        cin >> N;
        int A = N/2+1;
        cout << A <<endl;
    }
    return 0;
}