#include<stdio.h>
int main()
{
    int t,n,i,sum,c;
    scanf("%i",&t);;
    float avg,favg;
    while(t--)
    {
       scanf("%i",&n) ;
       int A[n];
       i=0,sum=0;
       while(i!=n)
       {
           scanf("%i",&A[i]);
           sum+=A[i];
           i++;
       }
       avg=(float)sum/(float)n;
       i=0,c=0;
       while(i!=n)
       {
           if(avg<A[i])
             c++;
            i++;
       }
       favg=(float)c/(float)n*100;
       printf("%.3f%%\n",favg);
    }
}
