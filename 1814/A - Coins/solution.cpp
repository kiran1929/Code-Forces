#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long n, k;
        cin >> n >> k;
 
        if (k % 2 == 1)
            cout << "YES
";
        else
            cout << (n % 2 == 0 ? "YES" : "NO") << '
';
    }
 
    return 0;
}