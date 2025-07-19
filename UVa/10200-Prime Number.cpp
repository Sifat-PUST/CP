#include<bits/stdc++.h>
using namespace std;
bool isprime( int x)
{
    int i;
    for(i=3;i*i<=x;i+=2)
    {
        if(x%i==0)
            return false;
    }
    return true;
}
int prime(int x,int y)
{
    int c=0;
      int n;
       if(x<40&&y>=40)
        {
            c=c+(40-x);
            x=40;
        }
        else if(y<40)
        {
            c=1+(y-x);
            x=y+1;
        }
    while(x!=y+1)
    {
            n=(x*x)+x+41;
            if(isprime(n))
                c++;
        x++;
    }
    return c;
}
int main()
{
     int x,y,m;
    double p,d;
    while(cin>>x>>y)
    {
        d=(y-x)+1;
        m=prime(x,y);
        p=(m/d)*100;
        cout.precision(2);
        cout<<fixed;
        cout<<p<<endl;
    }
    return 0;
}
