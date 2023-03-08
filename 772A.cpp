/*Buy a Shovel(772A)*/

#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int k , r;
    cin >> k >> r;
 
    for(int i=1 ; i<10 ; i++) 
    {
        if((k*i-r)%10==0 ||  (k*i)%10==0) 
        {
            cout << i << "\n";
            break;
        }
    }
}