#include <stdio.h>
#include <math.h>
#include <string.h>
int main()

{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        
        char str[200000];
        scanf("%s",&str);
        int length = strlen(str);
        if (length > 10)
        {
            printf("%c",str[0]);
            printf("%d",length-2);
            printf("%c\n",str[length-1]);
            
        }
        else
        {
            printf("%s\n", str);
        }
    }
    return 0;
}
