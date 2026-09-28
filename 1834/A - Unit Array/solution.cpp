#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        
        int pos_count = 0;
        int neg_count = 0;
        int res = 0;
        
        for(int i = 0; i < n; i++){
            cin >> v[i];
            if(v[i] == 1)
                pos_count++;
            else
                neg_count++;
        }
        
        while(pos_count < neg_count || neg_count % 2 == 1)
        {
            res++;
            pos_count++;
            neg_count--;
        }
        
        cout << res << endl;
        
    }
 
    return 0;
}