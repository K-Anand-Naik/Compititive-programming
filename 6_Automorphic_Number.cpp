
#include <bits/stdc++.h>
using namespace std;
bool isAutomorphic(int N)
{
    int sq = N * N;
    while (N > 0) {
        if (N % 10 != sq % 10)
            return false;
        N /= 10;
        sq /= 10;
    }
    return true;
}

// Driver code
int main()
{
    int N = 376;
    isAutomorphic(N) ? cout << "Automorphic"
                     : cout << "Not Automorphic";

    return 0;
}