#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int t;
    long long int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int result;
        if(n%2==0)
        {
            result=n/2;
            cout<<result<<endl;
        }
        else
        {
            result=n/2+1;
            cout<<result<<endl;
        }

    }
}
