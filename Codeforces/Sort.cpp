#include<bits/stdc++.h>
using namespace std;
int swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}
void sort(int n,int A[])
{
    int i,j,c=0,p=0;
    for(i=0;i<n;i++)
    {
        p=0;
        for(j=0;j<n-1;j++)
        {
            if(A[j]>A[j+1])
            {
                swap(&A[j],&A[j+1]);
                j++;
                p++;
            }
            else;
        }
        if(p!=0)
        c++;
        else
            break;
    }
    printf("%i ",c);
}
int main()
{
    int t,n,i=0,j;
    scanf("%i",&t);
    if(t>=1&&t<=100)
    {
        while(i!=t)
    {
        j=0;
        scanf("%i",&n);
        if(n%2!=0&&n>=3&&n<=999)
        {
        int A[n];
        while(j!=n)
        {
            scanf("%i",&A[j]);
            j++;
        }
        sort(n,A);
        i++;
        }
    }
    }
}
