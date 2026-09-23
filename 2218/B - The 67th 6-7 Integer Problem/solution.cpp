#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t-- > 0)
    {
        int sum = 0;
        vector<int> v(7);
        
        for (int i = 0; i < 7; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        int max = *max_element(v.begin(), v.end());
        
        cout << 2 * max - sum << endl;
    }
 
    return 0;
}