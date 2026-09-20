#include <stdio.h>
#include <math.h>
 
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        for (int i=1; i<=n; i++)
        {
            printf("%d ",i);
        }
        printf("
");
    }
    return 0;
}