#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    
    while(t--){
        int k;
        cin >> k;
        
        bool check = false;
        int twice = 0;
        
        for(int i = 0; i < k; i++){
            int c;
            cin >> c;
            
            if(c >= 3)
                check = true;
            if(c >= 2)
                twice++;
        }
        
        if(check || twice >= 2)
            cout << "YES
";
        else
            cout << "NO
";
    }
 
    return 0;
}