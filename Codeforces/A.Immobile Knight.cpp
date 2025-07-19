#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x==y && x+y==6)
            cout<<2<<" "<<2<<endl;
        else if(x==1||y==1)
            cout<<x<<" "<<y<<endl;
        else
            cout<<x-1<<" "<<y-1<<endl;

    }
}
