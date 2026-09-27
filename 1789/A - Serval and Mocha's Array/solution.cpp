#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n;
        cin >> n;
 
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
 
        bool ok = false;
 
        for (int start = 0; start < n && !ok; start++)
        {
            vector<bool> used(n, false);
            used[start] = true;
 
            int g = a[start];
            bool good = true;
 
            for (int j = 2; j <= n; j++)
            {
                int idx = -1;
                int best = INT_MAX;
 
                for (int i = 0; i < n; i++)
                {
                    if (!used[i])
                    {
                        int ng = gcd(g, a[i]);
                        if (ng < best)
                        {
                            best = ng;
                            idx = i;
                        }
                    }
                }
 
                g = best;
                used[idx] = true;
 
                if (g > j)
                {
                    good = false;
                    break;
                }
            }
 
            if (good)
                ok = true;
        }
 
        cout << (ok ? "Yes" : "No") << '
';
    }
 
    return 0;
}