#include <stdio.h>
int main()
{
    int lim,bob,year=0;
    scanf("%d %d",&lim,&bob);
    while(lim <= bob)
    {
        lim=lim*3;
        bob=bob*2;
        ++year;
    }
    printf("%d",year);
    return 0;
}