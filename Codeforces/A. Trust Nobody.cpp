#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n],c=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<n)
                c++;
        }
        if(c==0)
            cout<<-1<<endl;
        else if(c==n)
            cout<<0<<endl;
        else
            cout<<c<<endl;
    }
}
