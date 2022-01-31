#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    cout<<"Vector size = "<<v.size()<<endl;
    for(int i = 0; i<5;i++){
        v.push_back(i);
    }

    cout<<"Extended vector size = "<<v.size()<<endl;
    for(int i = 0; i<5;i++){
        cout<<"value of v[" << i << "] = "<<v[i]<<endl;
    }

    //use iterator to access the values
    vector<int>::iterator i=v.begin();
    while(i != v.end()){
        cout<<"Value of i = "<<*i<<endl;
        i++;
    }
    return 0;
}