/*Anton and Letters(443A)*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    set<char>x;

    for(int i=0 ; i<s.length() ; i++){
        if(s[i]>='a' && s[i]<='z'){
            x.insert(s[i]);
        }
    }

    cout << x.size() << "\n";

    return 0;
}