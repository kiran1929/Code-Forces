#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) 
    {
        int n;
        cin >> n;
 
        string s;
        cin >> s;
 
        if (s.find("...") != string::npos)
            cout << 2 << '
';
            
        else
            cout << count(s.begin(), s.end(), '.') << '
';
    }
}