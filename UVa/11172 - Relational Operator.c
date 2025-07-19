#include<stdio.h>
int main()
{
    int t;
    scanf("%i",&t);
    long int x,y;
    while(t--)
    {
        scanf("%li%li",&x,&y);
        if(x>y)
            printf(">\n");
        else if(x<y)
            printf("<\n");
        else
            printf("=\n");
    }
}
