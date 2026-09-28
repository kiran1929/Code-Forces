#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
 
        int ans = 0;
        int cnt = 1;
 
        for (int i = 1; i < n; i++) {
            if ((a[i] & 1) == (a[i - 1] & 1))
                cnt++;
            else {
                ans += cnt - 1;
                cnt = 1;
            }
        }
 
        ans += cnt - 1;
 
        cout << ans << "
";
    }
 
    return 0;
}