#include<iostream>
using namespace std;
int fun1(int x)
{
    int c=1;
    while(x!=1)
    {
        if(x%2!=0)
            x=3*x+1;
        else
            x=x/2;
        c++;
    }
    return c;
}
int main()
{
    int x,y;
    while(cin>>x>>y)
    {
        int m=0;
        cout<<x<<" "<<y<<" ";
        if(x>y)
            swap(x,y);
    while(x!=y+1)
    {
        if(m<fun1(x))
            m=fun1(x);
        else;
        x++;
    }
    cout<<m<<endl;
    }
}