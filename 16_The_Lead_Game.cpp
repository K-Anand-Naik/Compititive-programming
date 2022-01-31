#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    int p_1 = 0, p_2 = 0;
    int p[t];
    int lead_by[t];
    int j = 0;
    for(int i = 0; i < t; i++) {
        int p1 , p2;  
        cin >> p1 >> p2;
        p_1+=p1;
        p_2+=p2;
        int score = (p_1)-(p_2); 
        if(score>=0) {
            p[j] = 1;
            lead_by[j] = score;
            j++;
        }
        else {
            p[j] = 2;
            lead_by[j] = (-1)*score;
            j++;
        }
    }
    int max = lead_by[0];
    int max_player = p[0];
    for(int j = 1; j < t; j++) {
        if(lead_by[j]>max){
            max = lead_by[j];
            max_player = p[j];
        }
    }
    cout<<max_player<<" "<<max;
    return 0;
}