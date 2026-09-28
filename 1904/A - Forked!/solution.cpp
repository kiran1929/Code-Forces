#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int xk, yk;
        cin >> xk >> yk;
        int xq, yq;
        cin >> xq >> yq;
        
        int dx[] = {a, a, -a, -a, b, b, -b, -b};
        int dy[] = {b, -b, b, -b, a, -a, a, -a};
        
        set<pair<int, int>> king_knights;
        for (int i = 0; i < 8; i++) {
            king_knights.insert({xk + dx[i], yk + dy[i]});
        }
        
        set<pair<int, int>> queen_knights;
        for (int i = 0; i < 8; i++) {
            queen_knights.insert({xq + dx[i], yq + dy[i]});
        }
        
        int ans = 0;
        for (auto pos : king_knights) {
            if (queen_knights.count(pos)) {
                ans++;
            }
        }
        
        cout << ans << "
";
    }
    return 0;
}