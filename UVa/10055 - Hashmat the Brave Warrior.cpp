#include<cstdio>

int main()
{
    long long int x,y,d;
    while(scanf("%lld%lld",&x,&y)!= EOF)
    {
        d=y-x;
        if(d<0)
            d=d*-1;
        printf("%lld\n",d);
    }
    return 0;
}
