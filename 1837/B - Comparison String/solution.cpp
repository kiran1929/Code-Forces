#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
 
        int maxRun = 0;
        int currentRun = 0;
        char prev = '\0';
 
        for (char c : s) {
            if (c == prev) {
                currentRun++;
            } else {
                currentRun = 1;
                prev = c;
            }
 
            maxRun = max(maxRun, currentRun);
        }
 
        cout << maxRun + 1 << '
';
    }
 
    return 0;
}