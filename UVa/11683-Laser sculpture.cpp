#include<iostream>
#include<cmath>
using namespace std;
int fun(int spo,int l,int A[])
{
    int i,mx=0,mxp,sum;
    if(spo==l-1)
    {
        //cout<<A[spo]<<endl;
        return A[spo];
    }
    else
    {
        //cout<<"i Love Pushpo"<<endl;
        for(i=spo;i<l;i++)
        {
            if(mx<A[i])
            {
                mx=A[i];
                mxp=i;
            }
        }
        //cout<<mx<<endl;
        ////cout<<"sum :"<<sum<<endl;
        sum=mx-fun(mxp+1,l,A)+mx-fun(0,mx,A);
        cout<<sum<<endl;
        return sum;
    }
   //cout<<"1 ="<< sum <<""<<endl;
}
int main()
{
    int h,l,i,j,chtch;
    while(cin>>h)
    {
        if(h==0)
            break;
        else
        {
            cin>>l;
            int A[l];
            for(i=0;i<l;i++)
            {
                cin>>A[i];
            }
            fun(0,l,A);
        }
    }
}
/*
   int i,mx=0,maxpo,turn=0;
    if(spo==l-1)
    {
        cout<<A[spo]<<endl;
        //return A[spo];
    }
    else
    {
        cout<<"else"<<endl;
    for(i=spo;i<l;i++)
    {
       if(mx>=A[i])
        {
            maxpo=i;
            mx=A[i];
        }
        else;
    }
    cout<<" max is ="<<A[maxpo]<<endl;
    //turn+=A[maxpo]-fun(0,maxpo,A)+A[maxpo]-fun(maxpo+1,l,A);
    }
    //cout<<turn<<endl;
*/

