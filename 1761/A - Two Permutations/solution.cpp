#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        
        if (a == n && b == n) {
            cout << "Yes
";
        } else if (a + b <= n - 2) {
            cout << "Yes
";
        } else {
            cout << "No
";
        }
    }
    return 0;
}