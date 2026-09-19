#include <bits/stdc++.h>
using namespace std;
 
int gcd(int a, int b) {
    while (b != 0) 
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        int ans = 0;
 
        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
 
            ans = gcd(ans, abs(i - x));
        }
 
        cout << ans << '
';
    }
 
    return 0;
}