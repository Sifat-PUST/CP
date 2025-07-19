#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x,check;
    for(x=3;x<=n;x=x+2)
    {
        if(n%x==0)
        {
             check=1;
             break;
        }
    }
    if(check==1)
        printf("YES");
    else
        printf("NO");

    return 0;
}

