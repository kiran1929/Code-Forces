#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    
    while(t--){
        long long n, x;
        cin >> n >> x;
        
        vector<long long> points;
        points.push_back(0);
        
        for(int i = 0; i < n; i++){
            long long point;
            cin >> point;
            points.push_back(point);
        }
        points.push_back(x);
        n = points.size();
        
        long long maxi = INT_MIN;
        
        for(int i = 1; i < n; i++){
            if(i == n - 1)
                maxi = max(maxi, 2 * (points[i] - points[i - 1]));
            else
                maxi = max(maxi, points[i] - points[i - 1]);
        }
        
        cout << maxi << endl;
    }
 
    return 0;
}