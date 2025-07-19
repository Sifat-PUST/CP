#include<bits/stdc++.h>
using namespace std;
void print(vector<int>v)
{
    for(auto f:v)
        cout<<f<<" ";
    cout<<endl;
}
int main()
{
    int t,n,a;
    cin>>t;
    while(t--)
    {
        int check=0;
        cin>>n;
        vector<int>v,s;
        for(auto i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        //print(v);
        s.clear();
        s.push_back(v[0]);
        for(int i=1;i<v.size();i++)
        {
            if(v[i]!=0&&v[i]-s[i-1]<0)
                {
                    cout<<-1<<endl;
                    check=1;
                    break;
                }
            else
            {
                //s[i]=v[i]+s[i-1];
                s.push_back(v[i]+s[i-1]);
            }
        }
        if(check==0)
            print(s);
    }
}

