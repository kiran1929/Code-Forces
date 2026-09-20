#include <stdio.h>
 
long long f(int a[ ], int n)
{
    long long s= 0;
    int m = 0;
    
    for(int i = 0; i < n; i++)
    {
        if(a[ i ] > m) m = a[ i ];
        s += m; 
    }
    return s; 
    
}
 
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n); 
        
        int a[55];
        
        for(int i = 0; i < n; i++) 
        {
            scanf("%d", &a[i]);
        }
 
        long long ans = f(a, n);
 
        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                int x = a[i];
                a[i] = a[j];
                a[j] = x;
 
                long long v = f(a, n);
                if(v > ans) ans = v;
 
                x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
        }
 
        printf("%lld
", ans);
    }
    return 0;
}