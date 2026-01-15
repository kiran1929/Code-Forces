#include <stdio.h>
 
int main()
{
    int t;
    scanf("%d", &t);
 
    while (t--)
    {
        int n;
        scanf("%d", &n);
 
        int count=(n+1)/10;
        printf("%d\n",count);
    }
 
    return 0;
}
