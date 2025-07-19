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
    int t,n;
    int mini,mixi,value;
    cin>>t;
    vector<int>a,one,zero;
    vector<long long int>b,x,y;
    long long int damage=0,long_value;
    while(t--)
    {
        damage=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>value;
            a.push_back(value);
            if(value==1)
               one.push_back(i);
            else
                zero.push_back(i);
        }
        for(int i=0;i<n;i++)
        {
            cin>>long_value;
            b.push_back(long_value);
        }
        for(int i=0;i<zero.size();i++)
        {
            x.push_back(b[zero[i]]);
        }
        for(int i=0;i<one.size();i++)
        {
            y.push_back(b[one[i]]);
        }
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());

        if(x.size()>y.size())
        {

            for(int i=0;i<x.size();i++)
            {
                if(i<y.size())
                {
                    if(x.front()>y.back())
                {
                    damage+=x.front()*2+y.back();
                    x.erase(x.begin());
                    y.pop_back();
                }
                else
                {
                    damage+=x.front()+y.back()*2;
                    x.erase(x.begin());
                    y.pop_back();
                }
                }
                else
                {
                    damage+=x[i];
                }
            }
        }
        else
        {
            for(int i=0;i<y.size();i++)
            {
                if(i<x.size())
                {
                if(x.front()>y.back())
                {
                    damage+=x.front()*2+y.back();
                    x.erase(x.begin());
                    y.pop_back();
                }
                else
                {
                    damage+=x.front()+y.back()*2;
                    x.erase(x.begin());
                    y.pop_back();
                }
                }
                else
                {
                    damage+=y[i];
                }
            }
        }
        cout<<damage<<endl;
    }

}
