#include <stdio.h>
 
int main()
{
    int T;
    scanf("%d", &T);
 
    while (T--)
    {
        int n, h, l;
        scanf("%d %d %d", &n, &h, &l);
 
        int row = 0, col = 0, both = 0;
 
        for (int i = 0; i < n; i++)
        {
            int x;
            scanf("%d", &x);
 
            if (x <= h && x <= l)
                both++;
            else if (x <= h)
                row++;
            else if (x <= l)
                col++;
        }
 
        int total = row + col + both;
 
        int ans = row + both;
        if (col + both < ans) ans = col + both;
        if (total / 2 < ans) ans = total / 2;
 
        printf("%d
", ans);
    }
 
    return 0;
}