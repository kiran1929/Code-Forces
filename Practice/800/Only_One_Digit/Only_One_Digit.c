#include <stdio.h>
 
int main()
{
    int t;
    scanf("%d", &t);
 
    while (t--)
    {
        int n;
        scanf("%d", &n);
 
        int temp = n;
        int min = 9;
 
        while (temp > 0)
        {
            int digit = temp % 10;
 
            if (digit < min)
                min = digit;
 
            temp = temp / 10;
        }
 
        printf("%d\n", min);
    }
 
    return 0;
}
