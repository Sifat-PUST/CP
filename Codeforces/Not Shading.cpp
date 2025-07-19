#include<iostream>
using namespace std;
int main()
{
    int t,n,m,r,c;
    int i,j,k,check=0,rcheck=0;
    cin>>t;
    for(k=0;k!=t;k++)
    {
       check=0,rcheck=0;
       cin>>n>>m>>r>>c;
       char a[n][m];
       i=0;
       while(i!=n)
       {
           j=0;
           while(j!=m)
           {
              cin>>a[i][j];
              if(a[i][j]=='B')
              {
                  check=1;
              }
              j++;
           }
           i++;
       }
       if(check==1)
       {
          if(a[r-1][c-1]=='B')
            cout<<0<<endl;
          else
          {
              i=0;
              while(i!=m)
              {
                  if(a[r-1][i]=='B')
                  {
                      cout<<1<<endl;
                      rcheck=1;
                      break;
                  }
                  i++;
              }
              if(rcheck!=1)
                cout<<2<<endl;
          }
       }
       else
        cout<<-1<<endl;
    }
    return 0;
}
