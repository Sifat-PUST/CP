#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int c=0;
        int min=count(a,a+n,a[0]);
        int max=count(a,a+n,a[n-1]);
        cout<<min*max*2<<endl;

    }
}
