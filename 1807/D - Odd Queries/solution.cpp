#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    int n, q;
    cin >> n >> q;
    vector<long long> pref(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        long long a;
        cin >> a;
        pref[i] = pref[i - 1] + a;
    }
    while (q--) {
        long long l, r, k;
        cin >> l >> r >> k;
        long long new_sum = pref[n] - (pref[r] - pref[l - 1]) + (r - l + 1) * k;
        if (new_sum % 2 != 0) {
            cout << "YES
";
        } else {
            cout << "NO
";
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}