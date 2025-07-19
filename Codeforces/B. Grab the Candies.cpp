#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int m=0,b=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
                m+=a[i];
            else
                b+=a[i];
        }

        if(m>b)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

