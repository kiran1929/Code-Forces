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
        
        if (n == 2){
            cout << -1 << endl;
            continue;
        }
        
        if(n == 1){
            cout << 1 << endl;
            continue;
        }
        
        cout << 1 << " " << 2;
        
        long long ans = 3;
        
        for(int i = 3; i <= n; i++){
            cout << " " << ans;
            
            ans = ans * 2;
            
            }
            
            cout << endl;
 
    }
 
    return 0;
}