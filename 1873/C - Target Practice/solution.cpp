#include <bits/stdc++.h>
using namespace std;
 
int getScore(int i, int j) {
    if (i == 0 || i == 9 || j == 0 || j == 9)
        return 1;
    else if (i == 1 || i == 8 || j == 1 || j == 8)
        return 2;
    else if (i == 2 || i == 7 || j == 2 || j == 7)
        return 3;
    else if (i == 3 || i == 6 || j == 3 || j == 6)
        return 4;
    else
        return 5;
}
 
int main()
{
    int t;
    cin >> t;
    
    while(t--){
        char arr[10][10];
        int total = 0;
        
        for (int i = 0; i < 10; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < 10; j++)
                arr[i][j] = s[j];
        }
                
        for(int i = 0; i < 10; i++)
            for(int j = 0; j < 10; j++)
                if (arr[i][j] == 'X')
                    total += getScore(i,j);
                    
        cout << total << endl;
    }
 
    return 0;
}