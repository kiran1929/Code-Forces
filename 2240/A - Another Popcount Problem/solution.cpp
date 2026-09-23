#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long n, k;
        cin >> n >> k;
 
        long long ans = 0;
 
        for (long long i = 1; i <= n; i = i * 2) {
            long long count = min(k, n / i);
            ans += count;
            n -= count * i;
        }
 
        cout << ans << "
";
    }
 
    return 0;
}