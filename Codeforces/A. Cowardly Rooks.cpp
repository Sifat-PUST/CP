// Not Accepted .

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n,m;
    int x,y;
    cin>>t;
    while(t--)
    {
        m=n=0;
        cin>>n>>m;
        int A[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                A[i][j]=0;
            }
        }
        for(int i=0;i<m;i++)
        {
            cin>>x>>y;
            x=x-1;
            y=y-1;
            A[x][y]=1;
        }
        if(m<n)
        {
            cout<<"YES"<<endl;
        }
        else if(n==m)
        {
            int c=0,k=0;
            for(int i=0;i<n;i++)
            {
                if(A[i][i]==1)
                {
                    c++;
                }
                else if(A[i][n-i-1]==1)
                {
                    k++;
                }
                else;
            }
            if(c==n)
                cout<<"NO"<<endl;
            else if(k==n)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
