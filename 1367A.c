/*Short Substrings(1367A)*/

#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int test;
    cin >> test;

    while (test--)
    {
        string b;
        cin >> b;

        string a = b.substr(0,2);

        for(int i=3;i<b.size();i=i+2) 
        {
            a=a+b[i];
        }

        cout << a << "\n";
    }
    return 0;
}