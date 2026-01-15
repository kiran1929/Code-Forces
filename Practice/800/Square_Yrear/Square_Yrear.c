#include <stdio.h>
#include <math.h>
int main()
{
    
    int m;
    scanf("%d",&m);
 
   for (int i=0;i<m;i+=1)
   {
    
       int n;
       scanf("%d",&n);
       double temp=sqrt(n);
       int temp1=(int)temp;
       if (n==0)
       {
           printf("%d %d\n",0,0);
       }
       else if (temp==(int)temp)
       {
           
           printf("%d %d\n",temp1-1,1);
       }
       else
       {
           printf("%d\n",-1);
       }
   
   
   }
     
 
    return 0;
}
