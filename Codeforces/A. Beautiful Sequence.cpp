#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        long int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            int k=i+1;
            if(k==a[i])
            {
                cout<<"YES"<<endl;
                c=1;
                break;
            }
        }
        if(c==0)
        {
            int cont=0,check=0;
            for(int i=0;i<n;i++)
            {
                 cont=count(a+i,a+n,i);
                 if(cont>=1)
                    check=1;
                 else;
            }
            if(check==1)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
}
