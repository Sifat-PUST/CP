#include<bits/stdc++.h>
using namespace std;
int checkZero(int a[],int n)
{
    int c=a[0];
    for(int i=0;i<n-1;i++)
    {
        c=c^a[i+1];
    }
    return c;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,check=0;
        cin>>n;
        int a[n],b[n]={0};
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<256;i++)
        {
            for(int j=0;j<n;j++)
            {
                b[j]=a[j]^i;
            }
            if(checkZero(b,n)==0)
            {
                cout<<i<<endl;
                check=1;
                break;
            }
            else;
        }
        if(check==0)
        {
            cout<<"-1"<<endl;
        }else;

    }
}
