#include<stdio.h>
int main()
{
    int x,y,z,i;
    int t;
    scanf("%i",&t);
    i=0;
    while(t--)
    {
        scanf("%i%i%i",&x,&y,&z);
        if((y>x && y<z)||(x>y && y>z))
            printf("Case %i: %d\n",++i,y);
        else if((x>y && x<z)||(y>x && x>z))
            printf("Case %i: %d\n",++i,x);
        else if((z>x && z<y)||(x>z && z>y))
            printf("Case %i: %d\n",++i,z);
    }
}
