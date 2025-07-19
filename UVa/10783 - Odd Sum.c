#include<stdio.h>
int main()
{
    int t,x,y,sum,i=0;
    scanf("%i",&t);
    while(t--)
    {
        scanf("%i%i",&x,&y);
        sum=0;
        while(x!=y+1)
        {
            if(x%2==1)
               sum=sum+x;
            x+=1;
        }
       printf("Case %i: %i\n",++i,sum) ;
    }
    return 0;
}
