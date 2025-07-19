#include<iostream>
using namespace std;
void maxmin(int a[],int x,int *max,int *min)
{
    for(int i=0;i<x;i++)
    {
        if(*max<*(a+i))
        {
            *max=*(a+i);
        }
        else if(*min>*(a+i))
        {
            *min=*(a+i);
        }

    }
}
int main()
{
    int t,a;
    int max,min;
    cin>>t;
    while(t)
    {
        cin>>a;
        int A[a];
        for(int i=0;i<a;i++)
        {
            cin>>A[i];
        }
        max=min=A[0];
        maxmin(A,a,&max,&min);
        cout<<max-min<<endl;
        t--;
    }
    return 0;
}
