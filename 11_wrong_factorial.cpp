#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int a[100] , t; 
    cin >> t;      
    for( int i = 0 ; i < t ; i++ )       
        cin >> a[i];
 
    for( int i = 0 ; i < t ; i++ )     
    {                                  
        double  fac = 1;
        
        for ( int j = a[i] ; j > 0 ; j-- ) 
            fac = fac * j;                 

        cout << fac << endl;
    }
}