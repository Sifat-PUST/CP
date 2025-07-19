#include<stdio.h>
#include<string.h>
int main()
{
    int t,n,sum=0;
    char str[100];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",str);
        if(strcmp(str,"donate") == 0)
        {
            scanf("%d",&n);
            sum=sum+n;
        }
        else
        {
            printf("%d\n",sum);
        }
    }
    return 0;
}
