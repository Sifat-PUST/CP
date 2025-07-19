#include<iostream>
using namespace std;
int Course(int x,int A[])
{
    int c,r,i,j,hold=0;
    cin>>c>>r;
    int B[c];
    for(i=0;i<c;i++)
        {
            cin>>B[i];
            for(j=0;j<x;j++)
            {
                if(B[i]==A[j])
                    hold++;
            }
        }
        if(hold>=r)
            return 1;
        else return 0;
}
int main()
{
    int k,m,i;
    while(cin>>k)
    {
        int A[k],c=0;
        if(k==0)
            break;
        else
        {
            cin>>m;
            for(i=0;i<k;i++)
                cin>>A[i];
            for(i=0;i<m;i++)
                c+=Course(k,A);
            if(c==m)
                cout<<"yes"<<endl;
            else
                cout<<"no"<<endl;
        }
    }
}
