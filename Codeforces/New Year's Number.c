#include<stdio.h>
int main()
{
   int n,x;
   scanf("%d",&n);
   int i,j,check;
   for(i=0;i<10;i++)
   {
       for(j=0;j<10;j++)
       {
          x=(2020*i)+(2021*j) ;
          if(n==x)
            {
                check=1;
                break;
            }
       }
       if(check==1)
        break;
   }
   if(check==1)
    printf("YES");
   else
    printf("NO");
   return 0;
}
