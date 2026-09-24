#include <bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        cin >> n;
        
        vector<int> v(n);
        
        for(int i = 0; i < n; i++)
            cin >> v[i];
            
        int min_oop = INT_MAX;
        
        for(int i = 0; i < n; i++)
            min_oop = min(min_oop, abs(v[i]));
            
        cout << min_oop << endl;
 
    return 0;
}