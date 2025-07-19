#include<stdio.h>
int main()
{
    int t,n,i,h,l,k=0;

    scanf("%d",&t);

    while(t!=0)
    {
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    h=0,l=0;
    for(i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
            h++;
        else if(a[i]>a[i+1])
            l++;
            else;
    }
    k++;
   printf("case %d: %d %d\n",k,h,l);
     t--;
        }
    return 0;
}
