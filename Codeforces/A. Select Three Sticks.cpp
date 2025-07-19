#include<bits/stdc++.h>
using namespace std;
void print(vector<int>v)
{
    for(auto f:v)
        cout<<f<<" ";
    cout<<endl;
}
int find(vector<int>&v,int x)
{
    int sum=0;
    vector<int>c;
    for(int i=0;i<v.size();i++)
    {
        if(x-v[i]>=0)
            c.push_back((x-v[i]));
        else
            c.push_back(v[i]-x);
    }
    for(int i=0;i<3;i++)
    {
        int index=(min_element(c.begin(),c.end()))-c.begin();
        sum+=c[index];
        c.erase(c.begin()+index);
    }
    return sum;
}
int main()
{
    int t,n,a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>v,s;
        for(auto i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        for(int i=0;i<n;i++)
        {
            int x=*(v.begin()+i);
            int c=count(v.begin(),v.end(),x);
            if(c>2)
            {
               s.push_back(0);
            }
            else
            {
                s.push_back(find(v,x));
            }
        }
        //print(s);
        cout<<*(min_element(s.begin(),s.end()))<<endl;
    }
}
