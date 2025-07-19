#include<stdio.h>
int main()
{
    int t,n;
    long int r;
    scanf("%i",&t);
    while(t!=0)
    {
        scanf("%i",&n);
        r=(((n*567)/9)+7492)*(235/47)-498;
        if(r<0)r*=-1;
        printf("%li\n",(r/10)%10);

    }
}
