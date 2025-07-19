#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,c,a;
    int tem,cnt;
    cin>>t;
    while(t--)
    {
        tem=0;
        cin>>n>>c;
        vector<int>v;
        for(int i=0;i<n;++i)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        while(v.size())
        {
            cnt=count(v.begin(),v.end(),v.front());
            v.erase(v.begin(),v.begin()+cnt);
            if(cnt>=c)
               tem+=c;
            else
                tem+=cnt;
        }
        cout<<tem<<endl;
    }
}

