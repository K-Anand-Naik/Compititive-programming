#include<bits/stdc++.h>
using namespace std;
int len_digit(int num)
{
    int len;
    len = log10(num) + 1;
    return len;
}
int main(){
    int n;
    cin >> n;
    cout<<len_digit(n)<<endl;
}