#include<stdio.h>
int main()
{
    int x,y,z;
    long int a,b,c;
    while(scanf("%i%i%i",&x,&y,&z)==3)
    {
        if(x==0 && y==0 && z==0)
            break;
        a=x*x;
        b=y*y;
        c=z*z;
        if(a+b==c)
            printf("right\n");
        else if(b+c==a)
            printf("right\n");
        else if(a+c==b)
            printf("right\n");
        else
            printf("wrong\n");

    }
    return 0;
}
