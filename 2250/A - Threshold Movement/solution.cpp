#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<long long> w(n + 1);
 
        for (int i = 1; i <= n; i++)
            cin >> w[i];
 
        if (n % 2) {
            cout << "NO" << endl;
            continue;
        }
 
        long long maxEven = 0;
        long long minOdd = LLONG_MAX;
 
        for (int i = 1; i <= n; i++) {
            if (i % 2)
                minOdd = min(minOdd, w[i]);
            else
                maxEven = max(maxEven, w[i]);
        }
 
        if (maxEven + 1 < minOdd)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
 
    return 0;
}