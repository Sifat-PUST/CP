#include<iostream>
using namespace std;
int main()
{
    int t,n,q;
    cin>>t;
    while(t--)
    {
       cin>>n>>q;
       int a[n]={0},b[n]={0};
       int sum=0;
       for(int i=1;i<=n;i++)
       {
          cin>>a[i];
          sum+=a[i];
          b[i]=sum;
       }

       int l,r,k;
       while(q--)
       {
          int nsum=0;
          cin>>l>>r>>k;
          nsum=b[n]-(b[r]-b[l-1])+(abs(l-r)+1)*k;

          if(nsum%2!=0)
            cout<<"YES"<<endl;
          else
            cout<<"NO"<<endl;
       }
    }
}
/*

          cout<<b[n]<<" "<<b[r]<<" "<<b[l-1]<<" "<<(abs(l-r)+1)*k<<endl;

          cout<<nsum<<endl;
*/

