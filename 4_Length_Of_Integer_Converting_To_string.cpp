#include<iostream>
#include<cstring>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    unsigned long int int_len = 0;
    // convert to string
    int_len = to_string(n).length();
    cout<<int_len<<endl;
    return 0;
}