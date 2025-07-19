#include<stdio.h>
int main()
{
    int p,x,y,z;
    while(scanf("%i%i%i%i",&p,&x,&y,&z)==4)
    {
        int sum=0;
        if(!p&&!x&&!y&&!z)
        break;
        else
        {
           if(p>=x)
            sum=sum+(p-x);
           else
            sum+=40-(x-p);
           if(x>=y)
            sum+=40-(x-y);
           else
            sum+=(y-x);
           if(y>=z)
            sum+=y-z;
           else
            sum+=40-(z-y);
            sum+=120;
        }
        printf("%i\n",sum*9);
    }
}
